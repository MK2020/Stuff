/*
 * Shapes.h
 *
 *  Created on: 4 Dec 2016
 *      Author: mh4115
 */

#ifndef SHAPES_H_
#define SHAPES_H_


#include "point.h"
#include <string>
using namespace std;

class Shapes
{

public:
	virtual double perimeter() const = 0;
	//virtual string str() const;
	virtual ~ Shapes() {};

	friend ostream& operator<<(ostream& out,  const Shapes& s)
	{
		out<<s.perimeter();
		return out;
	}

};

class Triangle : public Shapes
{

private:
	Point a;
	Point b;
	Point c;

public:

	Triangle(const Point& i_a, const Point& i_b, const Point& i_c);

	double perimeter() const;
//	{
//		return a.distance_points(b) + b.distance_points(c) + c.distance_points(a);
//
//	}

	//string str() const;
};


class Circle : public Shapes
{

private:

	Point centre;
	double radius;

public:

	Circle(const Point& i_centre, const double& i_radius);

	double perimeter() const
	{

		return 2*3.14*radius;
	}

	//string str() const;
};




#endif /* SHAPES_H_ */
