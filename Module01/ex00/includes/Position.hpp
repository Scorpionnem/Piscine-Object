/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Position.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:53:57 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/08 15:20:45 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POSITION_HPP
# define POSITION_HPP

# include "libs.hpp"

struct	Position
{
	Position() : x(0), y(0), z(0)
	{
		std::cout << BLUE"Created new position"RESET << std::endl;	
	}
	~Position()
	{
		std::cout << BLUE"Deleted position"RESET << std::endl;
	}
	Position(int x, int y, int z) : x(x), y(y), z(z) {}
	int x, y, z;
};

#endif
