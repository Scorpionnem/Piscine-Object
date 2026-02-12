/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StudentList.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:52:27 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/12 12:52:53 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Student.hpp"
#include "List.hpp"
#include "Singleton.hpp"

class	StudentList : public List<Student>, public Singleton<StudentList>
{
	public:
		StudentList() {}
		~StudentList() {}
	private:
};
