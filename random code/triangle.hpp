/*
 * triangle.hpp
 *
 *  Created on: 17 Oct 2016
 *      Author: mwanahusssein
 */

#ifndef TRIANGLE_HPP_
#define TRIANGLE_HPP_
#include "point.hpp"

class Triangle{
private:
	Point a;
	Point b;
	Point c;

public:
	//overloaded constructor
	Triangle(Point, Point, Point);
	double perimeter(Point, Point, Point);
};


#endif /* TRIANGLE_HPP_ */
