/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PackageReductionDiscountCommand.hpp                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 11:44:47 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/11 11:47:56 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PACKAGEREDUCTIONDISCOUNTCOMMAND_HPP
# define PACKAGEREDUCTIONDISCOUNTCOMMAND_HPP

# include "Command.hpp"

class PackageReductionDiscountCommand : public Command
{
	public:
		PackageReductionDiscountCommand(int id, const std::string &client, const std::map<std::string, int> &articles)
		: Command(id, client, articles)
		{}
		int get_total_price()
		{
			if (Command::get_total_price() > 150)
				return (Command::get_total_price() - 10);
			return (Command::get_total_price());
		}
};

#endif
