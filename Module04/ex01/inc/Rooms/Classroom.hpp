/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classroom.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:19:36 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/12 12:19:55 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Room.hpp"

class	Course;

class Classroom : public Room
{
	public:
		Classroom();
		void assignCourse(Course* p_course);
	private:
		Course* _currentRoom;
};
