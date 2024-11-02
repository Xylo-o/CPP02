/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:43:25 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/02 18:55:42 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cmath>

class Fixed {
	public:
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed( const int i) {
			std::cout << "Int consturctor called\n";
		}
		Fixed( const float f) {
			std::cout << "Float constructor called\n";
		}
		Fixed() {
			std::cout << "Default constructor called\n";
		}
		~Fixed() {
			std::cout << "Destructor has been called\n";
		}
	private:
};