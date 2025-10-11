/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TuesdayDiscountCommand.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 11:42:25 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/11 11:53:15 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TUESDAYDISCOUNTCOMMAND_HPP
# define TUESDAYDISCOUNTCOMMAND_HPP

# include "Command.hpp"

class TuesdayDiscountCommand : public Command
{
	public:
		TuesdayDiscountCommand(int id, const std::string &client, const std::map<std::string, int> &articles)
		: Command(id, client, articles)
		{}
		int get_total_price()
		{
			if (_date->tm_wday == 2)
				return (Command::get_total_price() * 0.9);
			return (Command::get_total_price());
		}
};

#endif
