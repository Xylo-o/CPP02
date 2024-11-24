/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:43:25 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/24 17:04:19 by adprzyby         ###   ########.fr       */
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
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
	private:
		int value;
		static const int bits; 
};