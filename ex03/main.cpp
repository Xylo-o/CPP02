/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:40:29 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/05 14:22:04 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( int argc, char**argv ) {
	if (argc == 3) {
		Point const p(atof(argv[1]), atof(argv[2]));
		Point const a = 3.0f, 5.0f;
		Point const b = -1, 8;
		Point const c = 6, -3;
		p.bsp(a, b, c, p);
	}
	else {
		std::cout << "Correct format\n" << "./point point(x) point(y)\n";
	}
	return 0;
}