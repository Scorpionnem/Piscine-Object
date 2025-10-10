/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Engine.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:16:05 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/10 18:33:11 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENGINE_HPP
# define ENGINE_HPP

# include <iostream>

class	Engine
{
	public:
		Engine(): _started(false) {}
		~Engine() {}
		void	start()
		{
			std::cout << "Starting engine" << std::endl;
			_started = true;
		}
		void	stop()
		{
			std::cout << "Stopping engine" << std::endl;
			_started = false;
		}

		bool	getState() {return (_started);}
	private:
		bool	_started;
};

#endif
