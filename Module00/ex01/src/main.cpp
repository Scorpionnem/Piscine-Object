/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:32:37 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/07 22:51:33 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Graph.hpp"

int	main(void)
{
	Graph graph(Vector2(10, 10));

	graph.addPoint(Vector2(1, 1));

	graph.addPoint(Vector2(9, 9));

	graph.addPoint(Vector2(5, 2));

	graph.print();
}
