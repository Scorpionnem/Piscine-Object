/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:17:54 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/07 22:20:49 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bank.hpp"

Bank::Bank() : _currentID(0), _liquidity(0)
{
	std::cout << "Bank: Created a new bank!" << std::endl;
}

Bank::~Bank()
{
	for (std::map<uint, Account *>::iterator it = _clientAccounts.begin(); it != _clientAccounts.end(); it++)
		delete it->second;

	std::cout << "Bank: Deleted a bank!" << std::endl;
}

void	Bank::createNewAccount()
{
	_clientAccounts.insert(std::make_pair(_currentID, new Bank::Account(_currentID)));

	std::cout << "Bank: Created a new account with id " << _currentID << std::endl;
	_currentID += 1;
}

void	Bank::addMoneyToAccount(uint id, int value)
{
	_liquidity += value * 0.05;
	value -= value * 0.05;

	getClient(id)->_value += value;

	std::cout << "Bank: Added " << value << " wallets to account " << id << std::endl;
}

void	Bank::takeLoan(uint id, int val)
{
	Account	*pooron = getClient(id);

	if (val > _liquidity)
		throw std::runtime_error("Loan greater than liquidity");

	pooron->_value += val;
	_liquidity -= val;

	std::cout << "Bank: Account " << id << " took a loan of " << val << " wallets" << std::endl;
}

void	Bank::deleteAccount(uint id)
{
	if (_clientAccounts.find(id) == _clientAccounts.end())
		throw std::runtime_error("Account not found!");

	std::cout << "Bank: Deleted account with id " << _clientAccounts.find(id)->first << std::endl;

	delete _clientAccounts.find(id)->second;
	_clientAccounts.erase(_clientAccounts.find(id));
}

Bank::Account	*Bank::getClient(uint id)
{
	if (_clientAccounts.find(id) == _clientAccounts.end())
		throw std::runtime_error("Account not found!");

	return (_clientAccounts[id]);
}

Bank::Account	*Bank::operator[](uint id)
{
	return (getClient(id));
}
