/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:15:31 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/07 22:27:01 by mbatty           ###   ########.fr       */
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
				Account(uint id)
				: _id(id), _value(0)
				{
					std::cout << "Account: Created a new account!" << std::endl;
				}
				uint	getID() const {return (_id);}
				int		getValue() const {return (_value);}
			private:
				uint	_id;
				int		_value;

			friend Bank;
		};
	private:
		uint						_currentID;
		int							_liquidity;
		std::map<uint, Account *>	_clientAccounts;
	public:
		Bank();
		~Bank();

		void	createNewAccount();
		void	deleteAccount(uint id);
		Account	*getClient(uint id);
		Account	*operator[](uint id);

		void	addMoneyToAccount(uint id, int value);
		void	takeLoan(uint id, int val);

		void	setLiquidity(int value) {_liquidity = value;}
		int		getLiquidity() const {return (_liquidity);}
};

#endif
