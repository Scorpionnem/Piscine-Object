/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brakes.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:28:11 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/10 18:33:41 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAKES_HPP
# define BRAKES_HPP

# include <iostream>

class	Brakes
{
	public:
		Brakes(): _brakingForce(0) {}
		~Brakes() {}

		void	apply_force_on_brakes(int force)
		{
			_brakingForce += force;
		}
		void	apply_emergency_brakes()
		{
			_brakingForce = __INT_MAX__;
		}

		void	print()
		{
			std::cout << "Braking with a force of " << _brakingForce << std::endl;
		}

		int	getBreakingForce() {return (_brakingForce);}
	private:
		int	_brakingForce;
};

#endif
