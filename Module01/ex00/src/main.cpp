/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:11:46 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/08 14:06:18 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Workshop.hpp"

int	main(void)
{
	std::cout << ITALIC"Creating factories"RESET << std::endl;
	
	Workshop<Shovel>	temuFactory;
	Workshop<Hammer>	wishFactory;

	std::cout << ITALIC"Breeding workers"RESET << std::endl;

	Worker	bob;
	Worker	theo;
	Worker	leo;
	Worker	etienne;
	
	Shovel	ironShovel;
	Hammer	diamondSledgeHammer;

	std::cout << ITALIC"Equipping tools"RESET << std::endl;

	bob.addTool(&ironShovel);
	theo.addTool(&ironShovel);
	
	leo.addTool(&diamondSledgeHammer);
	etienne.addTool(&diamondSledgeHammer);

	std::cout << ITALIC"Registering workers"RESET << std::endl;
	
	temuFactory.registerWorker(&bob);
	temuFactory.registerWorker(&theo);

	wishFactory.registerWorker(&leo);
	wishFactory.registerWorker(&etienne);

	std::cout << ITALIC"Testing dropping a tool so no more job!"RESET << std::endl;

	leo.dropTool(&diamondSledgeHammer);

	std::cout << ITALIC"Working! (Get a job)"RESET << std::endl;

	temuFactory.executeWorkDay();
	wishFactory.executeWorkDay();
	
	std::cout << ITALIC"Destructors"RESET << std::endl;
}
