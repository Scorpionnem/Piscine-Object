/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RoomList.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:53:18 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/12 12:54:00 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Room.hpp"
#include "List.hpp"
#include "Singleton.hpp"

class	RoomList : public List<Room>, public Singleton<RoomList>
{
	public:
		RoomList() {}
		~RoomList() {}
	private:
};
