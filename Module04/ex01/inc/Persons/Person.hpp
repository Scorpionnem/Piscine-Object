/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:13:33 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/12 13:05:25 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class	Room;

class	Person
{
	public:
		Person(std::string p_name)
		{
			_name = p_name;
		}
		Room* room() {return (_currentRoom);}
		const std::string	&name() {return (_name);}
	private:
		std::string _name;
		Room* _currentRoom;
};
