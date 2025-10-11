/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 11:46:08 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/11 11:52:24 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TuesdayDiscountCommand.hpp"
#include "PackageReductionDiscountCommand.hpp"

#include <iostream>

int	main(void)
{
	TuesdayDiscountCommand	tuesdayCommand(1, "Mewen", {{"Banana", 5}, {"Apple", 3}, {"Pear", 50}});

	std::cout << "Mewen's command is " << tuesdayCommand.get_total_price() << std::endl;

	PackageReductionDiscountCommand	bigCommand(1, "Manutea", {{"Banana", 50}, {"Apple", 50}, {"Pear", 51}});

	std::cout << "Manutea's command is " << bigCommand.get_total_price() << std::endl;

	Command	normalCommand(1, "Pierre", {{"Rock", 1}, {"Boulder", 17}, {"Gravel", 42}});	

	std::cout << "Pierre's command is " << normalCommand.get_total_price() << std::endl;
}
