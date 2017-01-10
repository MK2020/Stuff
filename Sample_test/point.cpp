/*
 * point.cpp
 *
 *  Created on: 3 Dec 2016
 *      Author: mwanahusssein
 */

#include <cmath>
#include "point.h"

Point::Point(const double& x_in, const double& y_in) : x(x_in), y(y_in)
{}

double Point::distance_points(const Point& p1) const
{
    return sqrt( pow( (x-p1.x), 2) + pow( (y-p1.y), 2) );
}



