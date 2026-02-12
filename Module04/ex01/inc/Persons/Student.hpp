/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:12:40 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/12 12:19:13 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include "Person.hpp"

class	Course;
class	Classroom;

class	Student : public Person
{
	public:
		void attendClass(Classroom* p_classroom);
		void exitClass();
		void graduate(Course* p_course);
	private:
		std::vector<Course*> _subscribedCourse;
};
