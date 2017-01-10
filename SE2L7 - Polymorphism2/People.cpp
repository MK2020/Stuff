/*
 * People.cpp
 *
 *  Created on: 3 Dec 2016
 *      Author: mwanahusssein
 */

#include "People.h"
#include <sstream>
#include <string>
//************************************************People_test1**************************************************************************

People_test1::People_test1() :
Fname("n/a"), Sname("n/a"), Age(0)
{}

//I am overloading here : Same signature different arguments
People_test1::People_test1(const string&iFname, const string&iSname, const int&iAge)
		: Fname(iFname), Sname(iSname), Age(iAge)
		  {}

ostream& operator << ( ostream& out , const People_test1& Stranger)
{
	out<<"This is "<< Stranger.Fname <<" " << Stranger.Sname << " she is " << Stranger.Age<<endl;
	return out;
}


People_test1::~People_test1()
{
cout<<"calling destructor..."<<endl;
}

//************************************************People**************************************************************************

People::People() :
		Fname("n/a"), Sname("n/a"), Age(0)
{}

//I am overloading here : Same signature different arguments
People::People(const string&iFname, const string&iSname, const int&iAge)
		: Fname(iFname), Sname(iSname), Age(iAge)
		  {}

ostream& operator << ( ostream& out , const People& Stranger)
{
	//out<<"This is "<< Stranger.Fname <<" " << Stranger.Sname << " she is " << Stranger.Age<<endl;
	out<<Stranger.str();
	return out;
}

string People :: str ( ) const
{

	stringstream ss;
	cout<<"with string ss"<<endl;
	ss<<"This is "<< Fname <<" " << Sname << " she is " << Age;
	return ss.str();
}

People::~People()
{
cout<<"calling destructor..."<<endl;
}

//************************************************CollgeMember**************************************************************************

//default constructor
CollegeMember::CollegeMember():
		People(), CID_no(0)// cm1()
{}

CollegeMember::CollegeMember(const int& iCID_cm, const string& iFname_cm, const string& iSname_cm, const int& iAge_cm)
{
		People::Fname = iFname_cm; //why can't i say cm1.Fname = iFname; What's the difference of implemetation if any?
		People::Sname = iSname_cm;
		People::Age = iAge_cm;


	//When i do this i lose information of the 3 vars when it leaves the people scope how can i do
	//this without having to rrepeat myelf like above?
	//People(iFname_cm, iSname_cm, iAge_cm);

	CID_no = iCID_cm;
	cout<<"im leaving cm"<<endl;
}

string CollegeMember :: str ( ) const
{
	stringstream ss;
	cout<<"with string ss"<<endl;
	ss<<"This is "<< Fname <<" " << Sname << " she is " << Age<<" years old her CID is: "<< CID_no<< endl;
	//ss<<People::str()<<"CID: "<< CID_no;

	return ss.str();
}


//************************************************Student**************************************************************************

//default constructor
Student::Student() :
		CollegeMember(), Grade('0')
{}
//printout
string Student :: str ( ) const
{

	stringstream ss;
	cout<<"with string ss"<<endl;
	ss<<"This is "<< Fname <<" " << Sname << " she is " << Age<<" years old her CID is: "
			<< CID_no<< " and her grade is: "<<Grade<<endl;
	//ss<<CollegeMember::str()<<" "<<Fname << " has: "<<Grade;
	return ss.str();
}

//overloaded constructor
Student::Student(const char& iGrade_s, const int& CID_s, const string& iFname_s, const string& iSname_s, const int& iAge_s)
{

	Grade = iGrade_s;
	//cm1.CollegeMember(CID_s,iFname_s,iSname_s,iAge_s);
	CollegeMember::CID_no = CID_s;
	People::Fname = iFname_s;
	People::Sname = iSname_s;
	People::Age = iAge_s;
}

//************************************************Lecturer**************************************************************************

string Lecturer :: str ( ) const
{

	stringstream ss;
	cout<<"with string ss"<<endl;
	ss<<"This is "<< Fname <<" " << Sname << " she is " << Age<<"CID: "<< CID_no
			<<Fname << "is payed: "<<Pay<<endl;
	return ss.str();
}
