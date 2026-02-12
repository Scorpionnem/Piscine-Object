/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:36:11 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/12 13:05:34 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CourseList.hpp"
#include "RoomList.hpp"
#include "StaffList.hpp"
#include "StudentList.hpp"

#include <iostream>

int	main(void)
{
	Course	course("Shell00");
	CourseList::instance().add(&course);

	std::cout << "Finding course in list: " << CourseList::instance().get("Shell00") << std::endl;

	Staff	staff("Olivier");
	StaffList::instance().add(&staff);

	std::cout << "Finding course in list: " << StaffList::instance().get("Olivier") << std::endl;
}
