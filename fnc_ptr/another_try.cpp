/*
 * another_try.cpp
 *
 *  Created on: 9 Jan 2017
 *      Author: mwanahusssein
 */

#include <iostream>
using namespace std;

typedef int (*fp)(int a, int b);

struct tableEntry{
	tableEntry(string fnc_name, fp the_fnc);
	string fnc_name;
	fp the_fnc;
};


int add(int a, int b)
{

return a + b;

}

int mult(int a, int b)
{
return a*b;
}


int main(){

	tableEntry table[2] = {


			tableEntry("add", (fp)add),
			tableEntry("mult", (fp)mult)


	};

	string something;
	int a, b;
	cin>>something;

	for(int i = 0; i < 3; i++){
		if(table[i].fnc_name == "add"){
			cout<<"what add?"<<endl;
			cin>> a >> b;
			cout<<table[i].the_fnc(a ,b)<<endl;
		}else if(table[i].fnc_name == "mult"){
			cout<<table[i].the_fnc(a,b);
		}
	}

}











