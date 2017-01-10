/*
 * hmm.cpp
 *
 *  Created on: 9 Jan 2017
 *      Author: mwanahusssein
 */
/*
 * another_try.cpp
 *
 *  Created on: 9 Jan 2017
 *      Author: mwanahusssein
 */

#include <iostream>
using namespace std;
#include "h.h"




	tableEntry table[2] = {


			tableEntry("add", (fp)add),
			tableEntry("mult", (fp)mult)


	};


	//tableEntry::tableEntry() : fnc_name(0), the_fnc(0) {}

	tableEntry::tableEntry(string fncname_in, fp thefnc_in):
		fnc_name(fncname_in), the_fnc(thefnc_in) {}

int main() {
	cout<<"enter"<<endl;
	string something;
	cin>>something;
	int a = 0;
	int b = 0;


	for(int i = 0; i < 2; i++){

		if(table[i].fnc_name == something){
			cin>> a >> b;
			cout<< table[i].the_fnc(a ,b);

		}

	}

}



//}else if(table[i].fnc_name == something){
//	cout<<"here muk";
//	cout<<"what mult?"<<endl;
//	cin>> a >> b;
//	cout<<table[i].the_fnc(a,b);
//}else{
//	cout<<"not mult or add";







int add(int a, int b)
{

return a + b;

}

int mult(int a, int b)
{
return a*b;
}












