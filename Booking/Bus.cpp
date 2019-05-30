/*
 * Bus.cpp
 *
 *  Created on: May 12, 2019
 *      Author: karatsuba
 */

#include "Bus.h"
#include <iomanip>

using namespace std;


int Bus::bus_id = 1000;

Bus::Bus():Transport(){

	bus_id++;
	string identifier = "B" + to_string(bus_id);
	Bus::set_identifier(identifier);
}


Bus::~Bus() {
	// TODO Auto-generated destructor stub
}

