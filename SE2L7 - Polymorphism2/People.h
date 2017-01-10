/*
 * People.h
 *
 *  Created on: 28 Nov 2016
 *      Author: mwanahusssein
 */

#ifndef PEOPLE_H_
#define PEOPLE_H_

#include <iostream>
using namespace std;

class People_test1{

private:
//protected:
	string Fname;
	string Sname;
	int Age;

public:

	People_test1();
	People_test1(const string&iFname, const string&iSname, const int&iAge);
	~People_test1();

	friend std::ostream& operator<<(std::ostream& out, const People_test1& Stranger) ;
};


class People{

//private:
	//hence accessable to subclasses
protected:
	string Fname;
	string Sname;
	int Age;

public:

	People();
	People(const string&iFname, const string&iSname, const int&iAge);
	virtual ~People(); //need a virtual destructor

	friend std::ostream& operator<<(std::ostream& out, const People& Stranger) ;

	virtual string str() const;
};


class CollegeMember : public People
{

protected:
	int CID_no;
	//People cm1;WHY DOESNT THIS WORK?

public:

	CollegeMember();
	CollegeMember(const int& iCID_cm, const string& iFname_cm, const string& iSname_cm, const int& iAge_cm);
	string str() const;


};

class Student: public CollegeMember
{

private:
	char Grade;
	//CollegeMember cm1; when would someone use a variabel like this? what can it do?

public:

    //friend bool operator==(const People& p1);
	Student();
	Student(const char& iGrade_s, const int& CID_s, const string& iFname_s, const string& iSname_s, const int& iAge_s);
	string str() const;

};


class Lecturer: public CollegeMember
{

private:
	int Pay;


public:

	string str() const;


};

#endif /* PEOPLE_H_ */
