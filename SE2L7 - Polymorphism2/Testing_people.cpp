/*
 * Testing_people.cpp
 *
 *  Created on: 3 Dec 2016
 *      Author: mwanahusssein
 */

#include <iostream>
#include "People.h"
using namespace std;

int main()
{
/*testing one
	string iFname, iSname;
	int iAge;

	cout<<"Please enter your first name"<<endl;
	cin>>iFname;

	cout<<"Please enter your last name"<<endl;
	cin>>iSname;

	cout<<"Please enter your age"<<endl;
	cin>>iAge;

	People one(iFname, iSname, iAge);


	cout<<one<<endl;

*/

	string iFname, iSname;
	int iAge, CID;
	char iGrade;

	cout<<"Please enter your first name"<<endl;
	cin>>iFname;

	cout<<"Please enter your last name"<<endl;
	cin>>iSname;

	cout<<"Please enter your age"<<endl;
	cin>>iAge;

	cout<<"What is you CID Number?"<<endl;
	cin>>CID;

	cout<<"What grade did you get?"<<endl;
	cin>>iGrade;


	Student S1(iGrade, CID, iFname, iSname, iAge);
	//Student S1; default constructor
	cout<<S1<<endl;

return 0;
}



