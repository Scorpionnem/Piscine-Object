/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 10:56:34 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/11 10:57:57 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Car.hpp"

int	main(void)
{
	Car	car;

	car.start();

	car.turn_wheel(25);

	car.shift_gears_up();

	car.shift_gears_up();

	car.accelerate(25);

	car.shift_gears_down();

	car.apply_force_on_brakes(42);

	car.apply_emergency_brakes();

	car.reverse();

	car.accelerate(10);

	car.stop();

	car.straighten_wheels();
}
