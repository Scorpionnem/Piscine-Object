/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:15:31 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/08 10:47:31 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BANK_HPP
# define BANK_HPP

# include <iostream>
# include <vector>
# include <map>
# include <algorithm>

struct Bank
{
	public:
		struct Account
		{
			public:
				Account(long id) : _id(id), _value(0) {}
				const long	&getID() const {return (_id);}
				const int	&getValue() const {return (_value);}
			private:
				long	_id;
				int		_value;

			friend struct Bank;
		};
	private:
		long						_currentID;
		int							_liquidity;
		std::map<long, Account>		_clientAccounts;

		Account	&_getClient(long accountId)
		{
			if (_clientAccounts.find(accountId) == _clientAccounts.end())
				throw std::runtime_error("Account not found!");

			return (_clientAccounts.find(accountId)->second);
		}
	public:
		Bank() : _currentID(0), _liquidity(0) {}
		~Bank() {}

		const Account	&createAccount()
		{
			_clientAccounts.insert(std::make_pair(_currentID, Bank::Account(_currentID)));

			std::cout << "Bank: Created a new account with id " << _currentID << std::endl;
			_currentID += 1;
			return (_clientAccounts.find(_currentID - 1)->second);
		}
		void	deleteAccount(long accountId)
		{
			if (_clientAccounts.find(accountId) == _clientAccounts.end())
				throw std::runtime_error("Account not found!");

			std::cout << "Bank: Deleted account with id " << _clientAccounts.find(accountId)->first << std::endl;

			_clientAccounts.erase(_clientAccounts.find(accountId));
		}
		const Account	&getClient(long accountId) const
		{
			if (_clientAccounts.find(accountId) == _clientAccounts.end())
				throw std::runtime_error("Account not found!");

			return (_clientAccounts.find(accountId)->second);
		}
		const Account	&operator[](long accountId)
		{
			return (getClient(accountId));
		}

		void	addMoney(long accountId, int value)
		{
			int	tax = value * 0.05;

			_liquidity += tax;
			value -= tax;

			_getClient(accountId)._value += value;

			std::cout << "Bank: Added " << value << " wallets to account " << accountId << std::endl;	
		}
		void	takeLoan(long accountId, int val)
		{
			Account	&pooron = _getClient(accountId);

			if (val > _liquidity)
				throw std::runtime_error("Loan greater than liquidity");

			pooron._value += val;
			_liquidity -= val;

			std::cout << "Bank: Account " << accountId << " took a loan of " << val << " wallets" << std::endl;
		}

		void		setLiquidity(int value) {_liquidity = value;}
		const int	&getLiquidity() const {return (_liquidity);}
		int			&getLiquidity() {return (_liquidity);}
};

#endif
