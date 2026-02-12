/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Course.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:17:45 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/12 12:18:29 by mbatty           ###   ########.fr       */
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
		Course(std::string p_name);
		void assign(Professor* p_professor);
		void subscribe(Student* p_student);
	private:
		std::string _name;
		Professor* _responsable;
		std::vector<Student*> _students;
		int _numberOfClassToGraduate;
		int _maximumNumberOfStudent;
};
