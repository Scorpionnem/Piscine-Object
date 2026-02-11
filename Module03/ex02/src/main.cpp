/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 11:58:15 by mbatty            #+#    #+#             */
/*   Updated: 2026/02/11 15:22:05 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Rectangle.hpp"
# include "Triangle.hpp"
# include "Circle.hpp"

# include <iostream>
# include <string>
# include <vector>

int	main()
{
	std::vector<Shape*> shapes;
	
	shapes.push_back(new Rectangle(67, 69));
	shapes.push_back(new Triangle(10, 10, 4));
	shapes.push_back(new Circle(42));

	for (auto s : shapes)
	{
		std::cout << s->getArea() << std::endl;
		std::cout << s->getPerimeter() << std::endl;
		std::cout << std::endl;
		delete s;
	}
}
