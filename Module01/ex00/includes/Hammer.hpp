/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hammer.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:06:03 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/08 14:01:36 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HAMMER_HPP
# define HAMMER_HPP

# include "libs.hpp"

# include "Tool.hpp"

class	Hammer : public Tool
{
	public:
		Hammer() : _numberOfUses(0) {}
		void	use()
		{
			_numberOfUses++;
			std::cout << CYAN"Hammer: Hammer has been used"RESET << std::endl;
		}
		uint	getNumberOfUses() {return (_numberOfUses);}
	private:
		uint	_numberOfUses;
};

#endif
