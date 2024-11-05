/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:15:14 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/05 14:27:01 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point {
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &other);
		Point& operator=(const Point& other);
		~Point();
		Fixed getX( void ) const;
		Fixed getY( void ) const;
		bool bsp( Point const a, Point const b, Point const c, Point const point);
	private:
		Fixed const x;
		Fixed const y;
};