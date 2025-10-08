/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shovel.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:03:43 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/08 15:22:11 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHOVEL_HPP
# define SHOVEL_HPP

# include "libs.hpp"

# include "Tool.hpp"

class	Shovel : public Tool
{
	public:
		Shovel() : _numberOfUses(0)
		{
			std::cout << CYAN"Shovel: Created a new shovel!"RESET << std::endl;
		}
		~Shovel()
		{
			std::cout << CYAN"Shovel: Destroyed shovel"RESET << std::endl;
		}
		void	use()
		{
			_numberOfUses++;
			std::cout << CYAN"Shovel: Shovel has been used"RESET << std::endl;
		}
		uint	getNumberOfUses() {return (_numberOfUses);}
	private:
		uint	_numberOfUses;
};

#endif
