/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:12:22 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/11 13:24:28 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileLogger.hpp"
#include "StreamLogger.hpp"
#include <iostream>
#include <vector>

int	main(void)
{
	FileLogger	log("file.txt");
	StreamLogger	log2(std::cout);

	log.setHeader(" File: ");
	log.setTimeHeader(true);

	log2.setHeader("cout lol: ");
	log2.setTimeHeader(false);

	log.write("Hello file\n");
	log2.write("Hello stdcout\n");

	std::vector<ILogger*>	loggers = {&log, &log2};

	for (auto l : loggers)
		l->write("asdkljadklsajdklasjfdheavsjkldf\n");
}
