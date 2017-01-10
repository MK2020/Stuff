/*
 * point.h
 *
 *  Created on: 4 Dec 2016
 *      Author: mh4115
 */

#ifndef POINT_H_
#define POINT_H_

#include <cmath>

class Point{
public:

	Point(const double& x_in, const double& y_in)
	:x(x_in), y(y_in){}

	double distance_points(const Point& p1) const
	{
		return sqrt( pow( (x-p1.x), 2) + pow( (y-p1.y), 2) );
	}

	double get_x() const;
	double get_y() const;

//bool operator==(const Point& p2, const Point& p1);

bool operator==(const Point& p1);

protected:
	double x;
	double y;
};





#endif /* POINT_H_ */
