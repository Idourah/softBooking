/*
 * Administration.cpp
 *
 *  Created on: May 12, 2019
 *      Author: karatsuba
 */

#include "Administration.h"
#include "Bus.h"


#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>


using namespace std;

Administration::Administration(string path) {
	// TODO Auto-generated constructor stub

   con = new Connexion(path);
   cout << endl;
}
void Administration::login(){

	   cout <<"connecting as an administration member" << endl;cout << endl;
	   cout << "pseudo   :" << setw(4);
	   cin>> pseudo;
	   cout << "password :" << setw(4);
	   cin>> password;

	   con->login(pseudo,password);
	   cout << endl;

}
void Administration::new_bus_program(string path){

	transport = new Bus(60);
	string destination,departure,identifier;
	int depart_hour,depart_minute,depart_day,arrival_hour,arrival_minute,arrival_day,month,year;
	double price;

	cout <<"please enter the id of the bus : ";getline(cin,identifier);

	transport->set_identifier(identifier);

	cout <<"enter the departure spot   : ";getline(cin,departure);

	transport->set_departure(departure);

	cout <<"enter the destination      : ";getline(cin,destination);

	transport->set_destination(destination);

	cout <<"enter the depart day       : ";cin >> depart_day;

	transport->set_depart_day(depart_day);

	cout <<"enter the departure hour   : ";cin >> depart_hour;

	transport->set_depart_hour(depart_hour);

	cout <<"enter the departure minute : ";cin >> depart_minute;

	transport->set_depart_minute(depart_minute);

	cout <<"enter the arrival day      : ";cin >> arrival_day;

	transport->set_arrival_day(arrival_day);

	cout <<"enter the arrival hour     : ";cin >> arrival_hour;

	transport->set_arrival_hour(arrival_hour);

	cout <<"enter the arrival minute   : ";cin >> arrival_minute;

	transport->set_arrival_minute(arrival_minute);

	cout <<"enter  month               : ";cin >> month;

	transport->set_month(month);

	cout <<"enter the year             : ";cin >> year;

	transport->set_year(year);

	cout <<"enter the price            :";cin>>price;

	transport->set_price(price);

	record(*transport,path);

}
void Administration::record(Transport &t,string path){

	ofstream file(path,ios_base::app);

	if(file.is_open()){

		file << t.get_departure() << setw(4) << t.get_depart_hour() << ":"<< t.get_depart_minute() << setw(8)

	        << t.get_destination() << setw(8) << t.get_arrival_hour() <<":"<< t.get_arrival_minute() << setw(8)

			<< t.get_price() << " $" << endl;

		file.close();
	}
	else{cerr<<"error when opening a file " << endl;}
}

Administration::~Administration() {
	// TODO Auto-generated destructor stub

	delete con;
	delete transport;

}

