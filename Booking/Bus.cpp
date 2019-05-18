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
Bus::Bus(int cap):Transport(),capacity(cap){
	// TODO Auto-generated constructor stub
   if(cap <= 0){
	   cerr <<"invalid format " << endl;
   }
   else
	   capacity = cap;
}

Bus::~Bus() {
	// TODO Auto-generated destructor stub
}

