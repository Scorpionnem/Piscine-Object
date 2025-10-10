/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Gearbox.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:16:19 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/10 18:33:04 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GEARBOX_HPP
# define ENGINE_HPP

# include <iostream>

class	Gearbox
{
	public:
		Gearbox(): _gear(0) {}
		~Gearbox() {}
		
		void	shift_gears_up()
		{
			_gear++;
			print();
		}
		void	shift_gears_down()
		{
			_gear--;
			print();
		}
		void	reverse()
		{
			_gear = -1;
			print();
		}

		void	print()
		{
			std::cout << "Gear is at " << _gear << std::endl;
		}

		int	getGear() {return (_gear);}
	private:
		int	_gear;
};

#endif
