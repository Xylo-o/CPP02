/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:01:17 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/24 16:57:23 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called\n"; 
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
	return this->value;
}

void Fixed::setRawBits( int const raw ) {
	this->value = raw;
}