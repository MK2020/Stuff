
#ifndef POINTDEF_HPP_
#define POINTDEF_HPP_

#include "point.hpp"
#include "triangle.hpp"
#include<cmath>

Point::Point (){
        x = 0;
        y = 0;
        dfo = sqrt( pow(x, 2) + pow(y,2));

}
//class function
Point::Point(double x_in, double y_in){

        x = x_in;
        y = y_in;
        dfo = sqrt( pow(x, 2) + pow(y,2));
}

//type class function
double Point::get_x(){
    return x;
}

double Point::get_y(){
    return y;
}

Point Point::get_point(){
	return Point(x,y);
}
double Point::get_dfo(){
	return dfo;
}


double Point::set_x(double x_in){
	x = x_in;
	return dfo = sqrt( pow(x, 2) + pow(y,2));
}


double Point::set_point(Point p){
	x = p.x;
	y = p.y;
	return sqrt( pow(x, 2) + pow(y,2));
}
double Point::distance_origin(){
    return sqrt( pow(x, 2) + pow(y,2));
}

double Point::distance_points(Point p1){
    return sqrt( pow( (x-p1.x), 2) + pow( (y-p1.y), 2) );
}

void Point::symmetry_origin(Point p2){
     x= -p2.x;
     y= -p2.y;
     dfo = sqrt( pow(p2.x, 2) + pow(p2.y,2) );
}

void Point::translate(Point p4){
	x = x + p4.x;
	y = y + p4.y;
	dfo = sqrt( pow(x, 2) + pow(y,2));
	//cout<<"( " << x << ", "<<y<< " )";

}

Triangle::Triangle(Point p1, Point p2, Point p3){
	a = p1;
	b = p2;
	c = p3;
}

double Triangle::perimeter(Point a, Point b, Point c){
	return(a.distance_points(b) + b.distance_points(c) + c.distance_points(a));
}



#endif /* POINTDEF_HPP_ */
