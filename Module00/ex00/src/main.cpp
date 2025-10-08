/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:20:29 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/08 10:55:49 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bank.hpp"

int main()
{
	std::cout << "Now testing normal behaviour" << std::endl;

	try {
		Bank	laBanquePostale;

		laBanquePostale.setLiquidity(420);

		laBanquePostale.createAccount();
		laBanquePostale.createAccount();
		laBanquePostale.createAccount();
		laBanquePostale.createAccount();

		laBanquePostale.addMoney(0, 100);
		laBanquePostale.addMoney(1, 42);
		laBanquePostale.addMoney(2, 200);
		laBanquePostale.addMoney(3, 100);

		std::cout << "Liquidity: " << laBanquePostale.getLiquidity() << std::endl;

		laBanquePostale.takeLoan(0, 440);

		std::cout << "Liquidity: " << laBanquePostale.getLiquidity() << std::endl;

		std::cout << "Client 0 has " << laBanquePostale.getAccount(0).getValue() << " they're super rich! They can almost buy a 42 hoodie!" << std::endl;
	} catch (const std::exception &e) {
		std::cerr << "An error occured " << e.what() << std::endl;
	}

	std::cout << std::endl << "Now testing loan too high" << std::endl;

	try {
		Bank	creditAgricole;

		creditAgricole.setLiquidity(42);

		creditAgricole.createAccount();

		creditAgricole.takeLoan(0, 80085);
	} catch (const std::exception &e) {
		std::cerr << "An error occured " << e.what() << std::endl;
	}

	std::cout << std::endl << "Now testing unknown account" << std::endl;

	try {
		Bank	creditMutuel;

		creditMutuel.setLiquidity(42);

		const Bank::Account &bob = creditMutuel[0];
		(void)bob;
	} catch (const std::exception &e) {
		std::cerr << "An error occured " << e.what() << std::endl;
	}
}
