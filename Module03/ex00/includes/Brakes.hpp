/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brakes.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:28:11 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/11 10:54:23 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAKES_HPP
# define BRAKES_HPP

# include <iostream>

class	Brakes
{
	public:
		void	apply_force_on_brakes(int force)
		{
			std::cout << "Braking with force " << force << std::endl;
		}
		void	apply_emergency_brakes()
		{
			std::cout << "Braking with max force" << std::endl;
		}
};

#endif
