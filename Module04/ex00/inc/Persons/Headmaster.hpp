/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Headmaster.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:27:05 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/12 12:27:43 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Staff.hpp"
#include <vector>

class Headmaster : public Staff
{
	public:
		void receiveForm(Form* p_form);
	private:
		std::vector<Form*> _formToValidate;
};
