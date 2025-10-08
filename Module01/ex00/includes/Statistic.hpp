/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Statistic.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:55:12 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/08 15:20:13 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STATISTIC_HPP
# define STATISTIC_HPP

# include "libs.hpp"

struct	Statistic
{
	Statistic() : level(0), exp(0)
	{
		std::cout << MAGENTA"Created new statistics"RESET << std::endl;
	}
	~Statistic()
	{
		std::cout << MAGENTA"Deleted statistics"RESET << std::endl;
	}
	Statistic(int level, int exp) : level(level), exp(exp) {}
	int level;
	int exp;
};

#endif
