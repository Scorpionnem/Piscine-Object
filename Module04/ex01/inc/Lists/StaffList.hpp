/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StaffList.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:53:31 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/12 12:53:49 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Staff.hpp"
#include "List.hpp"
#include "Singleton.hpp"

class	StaffList : public List<Staff>, public Singleton<StaffList>
{
	public:
		StaffList() {}
		~StaffList() {}
	private:
};
