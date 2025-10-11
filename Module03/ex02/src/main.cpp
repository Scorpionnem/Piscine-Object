/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 11:58:15 by mbatty            #+#    #+#             */
/*   Updated: 2025/10/11 12:15:12 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Rectangle.hpp"
# include "Triangle.hpp"
# include "Circle.hpp"

# include <iostream>
# include <string>

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./ex02 | rectangle | triangle | circle" << std::endl;
		return (1);
	}
	
	std::string	id = std::string(av[1]);
	Shape	*shape = NULL;

	if (id == "rectangle")
		shape = new Rectangle(100, 35);
	else if (id == "triangle")
		shape = new Triangle(25, 10);
	else if (id == "circle")
		shape = new Circle(42);
	else
	{
		std::cout << "Id not found!" << std::endl;
		return (1);
	}
	std::cout << shape->area()	<< std::endl;
	delete shape;
}
