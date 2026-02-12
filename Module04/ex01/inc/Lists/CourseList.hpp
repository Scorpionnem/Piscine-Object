/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CourseList.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:53:13 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/12 12:55:46 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Course.hpp"
#include "List.hpp"
#include "Singleton.hpp"

class	CourseList : public List<Course>, public Singleton<CourseList>
{
	public:
		CourseList() {}
		~CourseList() {}
	private:
};
