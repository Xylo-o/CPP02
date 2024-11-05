/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:40:29 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/05 15:27:58 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( int argc, char**argv ) {
	if (argc == 3) {
		Point isIn;
		Point const p(atof(argv[1]), atof(argv[2]));
		Point const a(3.0f, 5.0f);
		Point const b(-1.0f, 8.0f);
		Point const c(6.0f, -3.0f);
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