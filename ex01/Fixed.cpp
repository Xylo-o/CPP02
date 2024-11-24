/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:43:28 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/24 17:02:01 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called\n"; 
}
Fixed::Fixed( const int i) : value(i << bits) {
	std::cout << "Int constructor called\n";
}
Fixed::Fixed( const float f) : value(static_cast<int>(roundf(f * (1 << bits)))) {
	std::cout << "Float constructor called\n";
}
Fixed::Fixed(const Fixed&other) : value(other.value) {
	std::cout << "Copy constructor called\n";
}
Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called\n";
	if (this == &other) {
		return *this;
	}
	value = other.value;
	return (*this);
}
Fixed::~Fixed() {
	std::cout << "Destructor has been called\n";
}

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