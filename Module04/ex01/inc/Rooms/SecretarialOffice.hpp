/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SecretarialOffice.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:20:08 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/12 12:20:27 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include <vector>
#include "Room.hpp"

class	Form;

class SecretarialOffice: public Room
{
	private:
		std::vector<Form*> _archivedForms;
	public:
};
