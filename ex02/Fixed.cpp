/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:40:13 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/03 17:34:44 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::bits = 8;

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