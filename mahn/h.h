/*
 * h.h
 *
 *  Created on: 9 Jan 2017
 *      Author: mwanahusssein
 */

#ifndef H_H_
#define H_H_
#include <iostream>
using namespace std;

typedef int (*fp)(int a, int b);

struct tableEntry{

	//tableEntry();
	tableEntry(string fncname_in, fp thefnc_in);

	string fnc_name;
	fp the_fnc;
};

int add(int a, int b);
int mult(int a, int b);




#endif /* H_H_ */
