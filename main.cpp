/*
 * main.cpp
 *
 *  Created on: May 9, 2019
 *      Author: karatsuba
 */

#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include "Transport.h"
#include "Bus.h"
#include "Administration.h"
#include "Connection.h"
#include "Reservation.h"

using namespace std;

int main(){


   /* Administration admin("admin.txt");
    Bus bus;*/

    //admin.new_bus("bus.txt");
   // admin.bus_list("bus.txt");

    /*admin.display();*/

	string path = "reservation.txt";

	Reservation r("christ","idourah","idourah96@gmail.com",1);
	r.record(path);



	return 0;
}


