/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:40:13 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/03 17:43:44 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() {}
Fixed::Fixed( const int i) : value(i << bits) {}
Fixed::Fixed( const float f) : value(static_cast<int>(roundf(f * (1 << bits)))) {}
Fixed::Fixed(const Fixed&other) : value(other.value) {}
Fixed&Fixed::operator=(const Fixed& other) {
	if (this == &other) {
		return *this;
	}
	value = other.value;
	return (*this);
}
Fixed::~Fixed() {}

int Fixed::getRawBits( void ) const {
	return value;
}

void Fixed::setRawBits( int const raw ) {
	this->value = raw;
}

float Fixed::toFloat( void ) const {
	return (static_cast<float>(value) / (1 << bits));
}

int Fixed::toInt( void ) const {
	return (value / (1 << bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

bool Fixed::operator>(const Fixed& other) const {
	return this->value > other.value;
}
bool Fixed::operator<(const Fixed& other) const {
	return this->value < other.value;
}
bool Fixed::operator>=(const Fixed& other) const {
	return this->value >= other.value;
}
bool Fixed::operator<=(const Fixed& other) const {
	return this->value <= other.value;
}
bool Fixed::operator==(const Fixed& other) const {
	return this->value == other.value;
}
bool Fixed::operator!=(const Fixed& other) const {
	return this->value != other.value;
}

int Fixed::operator+(const Fixed& other) const {
	return this->value + other.value;
}
int Fixed::operator-(const Fixed& other) const {
	return this->value - other.value;
}
int Fixed::operator*(const Fixed& other) const {
	return this->value * other.value;
}
int Fixed::operator/(const Fixed& other) const {
	return this->value / other.value;
}

Fixed& Fixed::operator++() {
	++value;
	return *this;
}
Fixed Fixed::operator++(int) {
	value++;
	return this->value;
}
Fixed& Fixed::operator--() {
	--value;
	return *this;
}
Fixed Fixed::operator--(int) {
	value--;
	return this->value;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return (a.getRawBits() < b.getRawBits()) ? a : b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return (a.getRawBits() < b.getRawBits()) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return (a.getRawBits() > b.getRawBits()) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return (a.getRawBits() > b.getRawBits()) ? a : b;
}