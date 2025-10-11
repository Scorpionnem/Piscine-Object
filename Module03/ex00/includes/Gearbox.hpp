/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Gearbox.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:16:19 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/11 10:55:55 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GEARBOX_HPP
# define ENGINE_HPP

# include <iostream>

class	Gearbox
{
	public:
		void	shift_gears_up()
		{
			std::cout << "Shitfing gears up" << std::endl;
		}
		void	shift_gears_down()
		{
			std::cout << "Shitfing gears down" << std::endl;
		}
		void	reverse()
		{
			std::cout << "Reversing gears" << std::endl;
		}
};

#endif
