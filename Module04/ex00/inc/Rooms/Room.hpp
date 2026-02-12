/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Room.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:14:13 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/12 12:30:37 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>

class	Person;

class	Room
{
	public:
		Room();
		bool canEnter(Person*);
		void enter(Person*);
		void exit(Person*);
		
		void printOccupant();
	private:
		long long ID;
		std::vector<Person*> _occupants;
};
