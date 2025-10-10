/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wheel.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:17:15 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/10 18:32:36 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHEEL_HPP
# define WHEEL_HPP

# include <iostream>

class	Wheel
{
	public:
		Wheel(): _angle(0) {}
		~Wheel() {}

		void	turn_wheel(int angle)
		{
			_angle += angle;
			print();
		}
		void	straighten_wheels()
		{
			_angle = 0;
			print();
		}
		
		void	print()
		{
			std::cout << "Wheel is rotated at " << _angle << " degrees" << std::endl;
		}

		int	getAngle() {return (_angle);}
	private:
		int	_angle;
};

#endif
