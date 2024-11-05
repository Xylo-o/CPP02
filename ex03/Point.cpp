/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:12:21 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/05 14:27:26 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}
Point::Point(const float x, const float y) : x(x), y(y) {}
Point::Point(const Point &other) : x(other.x), y(other.y) {}
Point& Point::operator=(const Point &other) {
	if (this != &other) {
		x = other.x;
		y = other.y;
	}
	return *this;
}
Point::~Point() {}

Fixed Point::getX() const {
	return x;
}

Fixed Point::getY() const {
	return y;
}