/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamLogger.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:19:37 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/11 13:20:14 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ILogger.hpp"
#include "Header.hpp"
#include <fstream>

class	StreamLogger : public ILogger, public Header
{
	public:
		StreamLogger(std::ostream &s) : _stream(s)
		{
		}
		~StreamLogger() {}

		void	write(std::string str)
		{
			_stream << getHdr() << str;
		}
	private:
		std::ostream	&_stream;
};
