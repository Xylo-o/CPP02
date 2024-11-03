/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:43:28 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/03 15:37:24 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits function called\n";
	return value;
}

void Fixed::setRawBits( int const raw ) {
	this->value = raw;
}

float Fixed::toFloat( void ) const {
	return (static_cast<float>(value) / (1 << bits));
}

int Fixed::toInt( void ) const {
	return (static_cast<int>(value) / (1 << bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}