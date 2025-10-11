/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Circle.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 12:10:41 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/11 12:12:33 by mbatty           ###   ########.fr       */
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

		float area()
		{
			return (M_PI * pow(_radius, 2));
		}
	private:
		float _radius;
};

#endif
