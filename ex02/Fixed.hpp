/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:40:22 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/03 15:40:24 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cmath>

class Fixed {
	public:
		Fixed() : value(0) {
			std::cout << "Default constructor called\n"; 
		}
		Fixed( const int i) : value(i << bits) {
			std::cout << "Int constructor called\n";
		}
		Fixed( const float f) : value(static_cast<int>(roundf(f * (1 << bits)))) {
			std::cout << "Float constructor called\n";
		}
		Fixed(const Fixed&other) : value(other.value) {
			std::cout << "Copy constructor called\n";
		}
		Fixed& operator=(const Fixed& other) {
			std::cout << "Copy assignment operator called\n";
			if (this == &other) {
				return *this;
			}
			value = other.value;
			return (*this);
		}
		~Fixed() {
			std::cout << "Destructor has been called\n";
		}
		friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
	private:
		int value;
		static const int bits; 
};