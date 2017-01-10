/*
 * point.h
 *
 *  Created on: 3 Dec 2016
 *      Author: mwanahusssein
 */

#ifndef POINT_H_
#define POINT_H_

class Point{
public:
	Point(const double& x_in, const double& y_in);
	double distance_points(const Point& p1) const;

protected:
	double x;
	double y;
};



#endif /* POINT_H_ */
