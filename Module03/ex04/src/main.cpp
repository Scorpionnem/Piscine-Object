/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:12:22 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/11 15:27:44 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileLogger.hpp"
#include "StreamLogger.hpp"
#include <iostream>
#include <vector>

int	main(void)
{
	FileLogger		file_log_header_timeheader("file1.txt");
	FileLogger		file_log_header("file2.txt");
	FileLogger		file_log_timeheader("file3.txt");
	
	StreamLogger	stream_log_header_timeheader(std::cout);
	StreamLogger	stream_log_header(std::cout);
	StreamLogger	stream_log_timeheader(std::cout);

	file_log_header_timeheader.setHeader(" [HEADER] ");
	file_log_header_timeheader.setTimeHeader(true);

	file_log_header.setHeader("[HEADER] ");

	file_log_header_timeheader.setTimeHeader(true);

	stream_log_header_timeheader.setHeader(" [HEADER] ");
	stream_log_header_timeheader.setTimeHeader(true);

	stream_log_header.setHeader("[HEADER] ");

	stream_log_header_timeheader.setTimeHeader(true);

	std::vector<ILogger*>	loggers = {&file_log_header_timeheader, &file_log_header, &file_log_timeheader, &stream_log_header_timeheader, &stream_log_header, &stream_log_timeheader};

	for (auto l : loggers)
		l->write("writing\n");
}
