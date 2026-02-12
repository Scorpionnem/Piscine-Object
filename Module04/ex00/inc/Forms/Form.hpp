/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:24:56 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/12 12:25:15 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FormType.hpp"

class Form
{
	public:
		Form(FormType p_formType)
		{

		}

		virtual void execute() = 0;
	private:
		FormType _formType;
};
