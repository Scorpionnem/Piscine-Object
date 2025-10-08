/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:32:37 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/08 11:02:18 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Graph.hpp"

int	main(void)
{
	std::cout << "Testing normal behavior" << std::endl << std::endl;

	try {
		Graph graph(Vector2(10, 10));

		graph.addPoint(Vector2(1, 1));

		graph.addPoint(Vector2(9, 9));

		graph.addPoint(Vector2(5, 2));

		graph.print();
	} catch (const std::exception &e) {
		std::cerr << "An error occured: " << e.what() << std::endl;
	}

	std::cout << std::endl << "Testing importing files" << std::endl << std::endl;

	try {
		Graph graph(Vector2(10, 10), "import.ft");

		graph.print();
	} catch (const std::exception &e) {
		std::cerr << "An error occured: " << e.what() << std::endl;
	}
}
