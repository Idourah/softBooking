/*
 * Bus.cpp
 *
 *  Created on: May 12, 2019
 *      Author: karatsuba
 */

#include "Bus.h"
#include <iomanip>

using namespace std;


Bus::Bus():Transport(){

	capacity = 0;
}
void Bus::set_capacity(int cap){

	 if(cap <= 0){
		   cerr <<"invalid format " << endl;
	   }
	   else
		   capacity = cap;
}
int Bus::get_capacity(){

	return capacity;
}
Bus::~Bus() {
	// TODO Auto-generated destructor stub
}

