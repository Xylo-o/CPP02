/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:09:51 by adprzyby          #+#    #+#             */
/*   Updated: 2024/11/05 16:24:57 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#include "Point.hpp"

static Fixed calculateArea(Point const a, Point const b, Point const c) {
    return Fixed((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) +
                  b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) +
                  c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2.0f);
}

bool Point::bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed mainTriangleArea = calculateArea(a, b, c);
    if (mainTriangleArea < 0) {
        mainTriangleArea = mainTriangleArea * -1;
    }

    Fixed area1 = calculateArea(point, a, b);
    Fixed area2 = calculateArea(point, b, c);
    Fixed area3 = calculateArea(point, c, a);

    if (area1 < 0) area1 = area1 * -1;
    if (area2 < 0) area2 = area2 * -1;
    if (area3 < 0) area3 = area3 * -1;

    Fixed subTrianglesArea = area1 + area2 + area3;

    return mainTriangleArea == subTrianglesArea;
}