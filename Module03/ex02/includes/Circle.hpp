/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Circle.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 12:10:41 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/11 15:04:38 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CIRCLE_HPP
# define CIRCLE_HPP

# include "Shape.hpp"
# include <cmath>

class Circle : public Shape
{
	public:
		Circle(float radius)
		{
			_radius = radius;
		}

		float getArea()
		{
			return (M_PI * pow(_radius, 2));
		}
		float	getPerimeter()
		{
			return (2 * M_PI * _radius);
		}
	private:
		float _radius;
};

#endif
