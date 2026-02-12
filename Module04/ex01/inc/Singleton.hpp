/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Singleton.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:34:09 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/12 12:49:12 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
class	Singleton
{
	public:
		static T	&instance()
		{
			static T	instance;

			return (instance);
		}
	protected:
		Singleton() {};
		~Singleton() {};
};
