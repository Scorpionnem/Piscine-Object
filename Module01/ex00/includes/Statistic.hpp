/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Statistic.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:55:12 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/08 12:56:35 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STATISTIC_HPP
# define STATISTIC_HPP

struct	Statistic
{
	Statistic() : level(0), exp(0) {}
	Statistic(int level, int exp) : level(level), exp(exp) {}
	int level;
	int exp;
};

#endif
