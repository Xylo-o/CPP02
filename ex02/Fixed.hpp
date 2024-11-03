/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:40:22 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/03 17:35:24 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cmath>

class Fixed {
	public:
		Fixed() : value(0) {}
		Fixed( const int i) : value(i << bits) {}
		Fixed( const float f) : value(static_cast<int>(roundf(f * (1 << bits)))) {}
		Fixed(const Fixed&other) : value(other.value) {}
		Fixed& operator=(const Fixed& other) {
			if (this == &other) {
				return *this;
			}
			value = other.value;
			return (*this);
		}
		~Fixed() {}
		friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
		
		bool operator>(const Fixed& other) const;		
		bool operator<(const Fixed& other) const;		
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		
		int operator+(const Fixed& other) const;
		int operator-(const Fixed& other) const;
		int operator*(const Fixed& other) const;
		int operator/(const Fixed& other) const;

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
	private:
		int value;
		static const int bits; 
};