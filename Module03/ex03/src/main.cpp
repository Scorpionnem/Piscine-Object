/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:26:01 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/11 13:07:53 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EmployeeManagement.hpp"

int	main(void)
{
	EmployeeManagement	voxelRPG;

	ContractEmployee	denis("Denis", 1);
	TempWorker			basile("Basile", 67);
	Apprentice			manutea("Manutea", 4);

	voxelRPG.addEmployee(&denis);
	voxelRPG.addEmployee(&basile);
	voxelRPG.addEmployee(&manutea);

	denis.registerNotWorkedHours(67000);

	basile.registerHoursToDo(8);

	manutea.registerHoursToDo(3);
	manutea.registerSchoolHours(4);

	voxelRPG.executeWorkday();
	voxelRPG.executeWorkday();
	voxelRPG.calculatePayroll();
}
