/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:01:31 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/02 16:47:02 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Fixed {
	public:
		Fixed() : value(0) {
			std::cout << "Default constructor called\n"; 
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
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		
	private:
		int value;
		static const int bits; 
};