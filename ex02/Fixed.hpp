/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:40:22 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/03 17:39:39 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed( const int i);
		Fixed( const float f);
		Fixed(const Fixed&other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
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