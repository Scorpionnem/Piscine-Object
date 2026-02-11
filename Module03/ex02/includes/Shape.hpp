/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shape.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 11:55:34 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/11 15:01:13 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHAPE_HPP
# define SHAPE_HPP

class	Shape
{
	public:
		Shape(){}
		virtual ~Shape(){}
	
		virtual float getArea() = 0;
		virtual float getPerimeter() = 0;
};

#endif
