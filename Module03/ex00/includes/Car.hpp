/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Car.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:10:23 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/11 10:58:00 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAR_HPP
# define CAR_HPP

# include "Engine.hpp"
# include "Gearbox.hpp"
# include "Wheel.hpp"
# include "Brakes.hpp"

class	Car
{
	public:
		void	start()
		{
			_engine.start();
		}
		void	stop()
		{
			_engine.stop();
		}
		
		void	accelerate(int speed)
		{
			_engine.accelerate(speed);
		}

		void	shift_gears_up()
		{
			_gearbox.shift_gears_up();
		}
		void	shift_gears_down()
		{
			_gearbox.shift_gears_down();
		}
		void	reverse()
		{
			_gearbox.reverse();
		}
		
		void	turn_wheel(int angle)
		{
			_wheel.turn_wheel(angle);
		}
		void	straighten_wheels()
		{
			_wheel.straighten_wheels();
		}
		
		void	apply_force_on_brakes(int force)
		{
			_brakes.apply_force_on_brakes(force);
		}
		void	apply_emergency_brakes()
		{
			_brakes.apply_emergency_brakes();
		}
	private:
		Engine	_engine;
		Gearbox	_gearbox;
		Wheel	_wheel;
		Brakes	_brakes;
};

#endif
