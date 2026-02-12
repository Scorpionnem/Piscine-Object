/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Professor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:28:27 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/12 12:28:40 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Staff.hpp"

class	Course;

class Professor : public Staff
{
	private:
		Course* _currentCourse;

	public:
		void assignCourse(Course* p_course);
		void doClass();
		void closeCourse();
};
