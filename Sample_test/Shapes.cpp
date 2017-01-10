/*
 * Shapes.cpp
 *
 *  Created on: 3 Dec 2016
 *      Author: mwanahusssein
 */

#include <iostream>
#include "Shapes.h"
#include <sstream>
#include <string>

Triangle::Triangle(const Point& i_a, const Point& i_b, const Point& i_c)
	:a(i_a), b(i_b), c(i_c)
{

if(
		i_a.distance_points(i_b) < (i_b.distance_points(i_c) + i_c.distance_points(i_a) )
		&&
		i_b.distance_points(i_c) < (i_c.distance_points(i_a) + i_a.distance_points(i_b) )
		&&
		i_c.distance_points(i_a) < i_a.distance_points(i_b) + i_b.distance_points(i_c)
){}
else{
	throw logic_error("you are trying to form an incorrect triangle!");
	}

}

double Triangle::perimeter() const
	{
		return a.distance_points(b) + b.distance_points(c) + c.distance_points(a);

	}

Circle::Circle(const Point& i_centre, const double& i_radius)
	:centre(i_centre), radius(i_radius)
{}

