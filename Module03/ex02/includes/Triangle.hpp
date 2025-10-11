/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Triangle.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 12:03:54 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/11 12:06:02 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIANGLE_HPP
# define TRIANGLE_HPP

# include "Shape.hpp"

class	Triangle : public Shape
{
	public:
		Triangle(float base, float height)
		{
			_base = base;
			_height = height;
		}

		float	area()
		{
			return (0.5 * _base * _height);
		}
	private:
		float	_base;
		float	_height;
};

#endif
