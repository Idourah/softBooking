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
#include "Administration.h"
#include "Connexion.h"

using namespace std;

int main(){


	Administration admin("admin.txt");
    admin.new_bus_program("bus.txt");
	return 0;
}


