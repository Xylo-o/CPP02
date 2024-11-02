/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:01:17 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/02 18:34:11 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits function called\n";
	return this->value;
}

void Fixed::setRawBits( int const raw ) {
	this->value = raw;
}