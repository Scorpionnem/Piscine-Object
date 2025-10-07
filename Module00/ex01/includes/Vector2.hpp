/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector2.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:30:38 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/07 22:32:34 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR2_HPP
# define VECTOR2_HPP

struct	Vector2
{
	Vector2(): x(0), y(0) {}
	Vector2(float x, float y): x(x), y(y) {}
	float	x, y;
};

#endif
