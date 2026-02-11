/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:14:11 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/11 13:25:32 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <ctime>

class	Header
{
	public:
		Header() {}
		~Header() {}

		void	setTimeHeader(bool state) {_hasTimeHdr = state;}
		void	setHeader(std::string hdr) {_hdr = hdr;}

	protected:
		std::string	getHdr()
		{
			std::string	timehdr = _hasTimeHdr ? _getLogTimeString() : "";
			return (timehdr + _hdr);
		}
		std::string	_hdr;
		bool		_hasTimeHdr = false;
	private:
		std::string	_getLogTimeString()
		{
			std::time_t t = std::time(0);
			std::tm* tm = std::localtime(&t);
			char buf[64];

			std::strftime(buf, sizeof(buf), "[%d/%m/%Y-%H:%M:%S]", tm);
			return std::string(buf);
		}
};
