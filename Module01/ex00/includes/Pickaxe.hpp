/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pickaxe.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:14:21 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/08 15:22:08 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PICKAXE_HPP
# define PICKAXE_HPP

# include "libs.hpp"

# include "Tool.hpp"

class	Pickaxe : public Tool
{
	public:
		Pickaxe() : _numberOfUses(0)
		{
			std::cout << CYAN"Pickaxe: Created a new pickaxe!"RESET << std::endl;
		}
		~Pickaxe()
		{
			std::cout << CYAN"Pickaxe: Destroyed pickaxe"RESET << std::endl;
		}
		void	use()
		{
			_numberOfUses++;
			std::cout << CYAN"Pickaxe: Pickaxe has been used"RESET << std::endl;
		}
		uint	getNumberOfUses() {return (_numberOfUses);}
	private:
		uint	_numberOfUses;
};

#endif
