/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Triangle.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 12:03:54 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/11 15:15:50 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIANGLE_HPP
# define TRIANGLE_HPP

# include "Shape.hpp"
# include <cmath>

class	Triangle : public Shape
{
	public:
		Triangle(float sideA, float sideB, float sideC)
		{
			_sideA = sideA;
			_sideB = sideB;
			_sideC = sideC;
		}

		float	getArea()
		{
			float	s = (_sideA + _sideB + _sideC) / 2.0;

			return (std::sqrt(s * ((s - _sideA) * (s - _sideB) * (s - _sideC))));
		}
		float	getPerimeter()
		{
			return (_sideA + _sideB + _sideC);
		}
	private:
		float	_sideA;
		float	_sideB;
		float	_sideC;
};

#endif
