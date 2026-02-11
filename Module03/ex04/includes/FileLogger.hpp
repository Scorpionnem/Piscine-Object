/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileLogger.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:10:47 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/11 13:23:03 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ILogger.hpp"
#include "Header.hpp"
#include <fstream>

class	FileLogger : public ILogger, public Header
{
	public:
		FileLogger(std::string path)
		{
			_file.open(path);
		}
		~FileLogger() {}

		void	write(std::string str)
		{
			if (_file.is_open())
				_file << getHdr() << str;
		}
	private:
		std::ofstream	_file;
};
