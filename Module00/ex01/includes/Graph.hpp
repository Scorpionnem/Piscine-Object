/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Graph.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:33:46 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/07 22:49:40 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPH_HPP
# define GRAPH_HPP

# include <iostream>
# include <vector>
# include "Vector2.hpp"

class	Graph
{
	public:
		Graph(const Vector2 &size)
		{
			_size = size;
		}
		~Graph() {}

		void	addPoint(const Vector2 &point)
		{
			_points.push_back(point);
		}
		void	print()
		{
			for (int y = _size.y - 1; y >= 0; y--)
			{
				std::cout << ">& " << (int)y;
				for (int x = _size.x - 1; x >= 0; x--)
				{
					if (_hasPoint(Vector2((_size.x - 1) - x, y)))
						std::cout << " X";
					else
						std::cout << " .";
				}
				std::cout << std::endl;
			}
			std::cout << ">&   ";
			for (int x = 0; x < _size.x; x++)
				std::cout << (int)x << " ";
			std::cout << std::endl;
		}
	private:
		bool	_hasPoint(Vector2 point)
		{
			for (std::vector<Vector2>::iterator it = _points.begin(); it != _points.end(); it++)
			{
				if (it->x == point.x && it->y == point.y)
					return (true);
			}
			return (false);
		}
		std::vector<Vector2>	_points;
		Vector2	_size;
};

#endif
