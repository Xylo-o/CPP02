/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:40:29 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/24 16:50:23 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( int argc, char**argv ) {
	if (argc == 3) {
		Point isIn;
		Point const p(atof(argv[1]), atof(argv[2]));
		Point const a(3.0f, 5.0f);
		Point b(-1.0f, 8.0f);
		Point c(6.0f, -3.0f);
		c = b;
		printf("b: %f, %f\n\n", c.getX().toFloat(), c.getY().toFloat());
		if (isIn.bsp(a, b, c, p)) {
			std::cout << "This point belongs to the triangle!\n";
		}
		else {
			std::cout << "This point is out of the triangle, try again!\n";
		}
	}
	else {
		std::cout << "Correct format\n" << "./point point(x) point(y)\n";
	}
	return 0;
}