/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:40:09 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/12 12:55:18 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <set>

template <typename T>
class	List
{
	public:
		List() {}
		~List() {}

		void	add(T *item)
		{
			_set.insert(item);
		}
		void	remove(T *item)
		{
			_set.erase(_set.find(item));
		}
		T	*get(const std::string &name)
		{
			for (T *item : _set)
				if (item->name() == name)
					return (item);
			return (NULL);
		}
	private:
		std::set<T*>	_set;
};
