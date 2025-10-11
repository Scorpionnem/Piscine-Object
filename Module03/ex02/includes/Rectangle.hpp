/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rectangle.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 11:56:28 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/11 11:58:13 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RECTANGLE_HPP
# define RECTANGLE_HPP

# include "Shape.hpp"

class	Rectangle : public Shape
{
	public:
		Rectangle(float width, float height)
		{
			_width = width;
			_height = height;	
		}
		float area()
		{
			return (_width * _height);
		}
	private:
		float	_width;
		float	_height;
};

#endif
