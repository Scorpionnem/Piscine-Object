/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Course.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:17:45 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/12 12:59:39 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <string>

class	Student;
class	Professor;

class Course
{
	public:
		Course(std::string p_name)
		{
			_name = p_name;
			(void)_numberOfClassToGraduate;
			(void)_maximumNumberOfStudent;
		}
		void assign(Professor* p_professor)
		{
			_responsable = p_professor;
		}
		void subscribe(Student* p_student)
		{
			_students.push_back(p_student);
		}

		const std::string	&name() {return (_name);}
	private:
		std::string _name;
		Professor* _responsable;
		std::vector<Student*> _students;
		int _numberOfClassToGraduate;
		int _maximumNumberOfStudent;
};
