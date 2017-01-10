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
	friend ostream& operator<<(ostream& out, const Shapes& s)
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

	Triangle(const Point& i_a, const Point& i_b, const Point& i_c):
	a(i_a),b(i_b),c(i_c)
	{

/* this is only printed when an error is thrown weird right?
				cout<<"i_a and i_b "<<i_a.distance_points(i_b);
				cout<<"i_b and i_c "<<i_b.distance_points(i_c);
				cout<<"i_c and i_a "<< i_c.distance_points(i_a);
*/
		if(


				i_a.distance_points(i_b) < (i_b.distance_points(i_c) + i_c.distance_points(i_a) )
				or
				i_b.distance_points(i_c) < (i_c.distance_points(i_a) + i_a.distance_points(i_b) )
				or
				i_c.distance_points(i_a) < i_a.distance_points(i_b) + i_b.distance_points(i_c)

		){}
		/*else if( (operator== (i_a,i_b), (i_b == i_c ) or (i_c == i_a)){
		        throw logic_error("you are trying to form an incorrect triangle - two points are equal!");
		}*/else{

		throw logic_error("you are trying to form an incorrect triangle - inconsistent triangle!");
			}

	}


	double perimeter() const
	{
		return a.distance_points(b) + b.distance_points(c) + c.distance_points(a);

	}

	//string str() const;
};


class Circle : public Shapes
{

private:

	Point centre;
	double radius;

public:

	Circle(const Point& i_centre, const double& i_radius) :
	centre(i_centre), radius(i_radius)
	{
		if(radius < 0)
			{
				throw logic_error("Come on now! Your radius is less than or equal to zero!");
			}

	}

	double perimeter() const
	{

		return 2*3.14*radius;
	}

	//string str() const;
};




#endif /* SHAPES_H_ */
