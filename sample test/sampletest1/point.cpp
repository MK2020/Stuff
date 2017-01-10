/*
 * point.cpp
 *
 *  Created on: 4 Dec 2016
 *      Author: mh4115
 */

#include <cmath>
#include "point.h"

// Point::Point(const double& x_in, const double& y_in) : x(x_in), y(y_in)
// {}

// double Point::distance_points(const Point& p1) const
// {
//     return sqrt( pow( (x-p1.x), 2) + pow( (y-p1.y), 2) );
// }

bool operator==(const Point& p1)
		{
	return(	x == (p1.get_x()) && y ==  (p1.get_y()) );
		}
//
// bool Point::operator ==(const Point& p2, const Point& p1)
// 		{
// 	return(	( (p2.get_x() ) == (p1.get_x()) )&& ( ( p2.get_y() ) ==  (p1.get_y()) ) ) ;
// 		}

double Point::get_x() const
{
	return x;
}

double Point::get_y() const
{
	return y;
}
