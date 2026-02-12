/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Room.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:14:13 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/12 13:02:00 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>

class	Person;

class	Room
{
	public:
		Room()
		{
			static long long ids = 0;

			_ID = ids++;
		}
		bool canEnter(Person*)
		{
			return (false);
		}
		void enter(Person*)
		{
			
		}
		void exit(Person*)
		{
			
		}
		
		void printOccupant()
		{
			
		}
		const long long &ID()
		{
			return (_ID);
		}
	private:
		long long _ID;
		std::vector<Person*> _occupants;
};
