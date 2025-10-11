/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Engine.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:16:05 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/11 10:55:16 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENGINE_HPP
# define ENGINE_HPP

# include <iostream>

class	Engine
{
	public:
		void	start()
		{
			std::cout << "Starting engine" << std::endl;
		}
		void	stop()
		{
			std::cout << "Stopping engine" << std::endl;
		}
		void	accelerate(int speed)
		{
			std::cout << "Accelerating engine with speed " << speed << std::endl;	
		}
};

#endif
