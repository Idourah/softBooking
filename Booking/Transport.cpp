/*
 * Transport.cpp
 *
 *  Created on: May 9, 2019
 *      Author: karatsuba
 */

#include "Transport.h"
#include <iostream>
#include <ctime>
#include <string>
#include <iomanip>

using namespace std;

Transport::Transport()
{
	// TODO Auto-generated constructor stub
	departure = "POLAND";

	destination = "FRANCE";

	identifier = "BOING AIR MAX 907";

	depart_time = "10h";

	depart_date = "02-05-2019";

	arrival_time = "14h";

	arrival_date = "02-05-2019";

	price = 350;


}
void Transport::set_depart_time(string time){

	depart_time = time;
}
void Transport::set_arrival_time(string tme){

	arrival_time = tme;
}
void Transport::set_destination(string dest){

	destination = dest;
}
void Transport::set_departure(string depart){

	departure = depart;
}
void Transport::set_identifier(string id){

	identifier = id;
}

void Transport::set_depart_date(string d){

	depart_date = d;
}
void Transport::set_arrival_date(string d){

	arrival_date = d;
}

void Transport::set_price(double prce){
	 error_msg = "invalid price format no less than 0.please check ";

	 /********* let's check if the price format is valid ***********/
	 if(prce <= 0 )

		 error_notification(error_msg);

	 else
		 price = prce;
}


string Transport::get_arrival_time()const{

	return arrival_time;
}
string Transport::get_depart_time()const{

	return depart_time;
}
string Transport::get_arrival_date()const{

	return arrival_date;
}
string Transport::get_depart_date()const{

	return depart_date;
}

string Transport::get_destination()const{

	return destination;
}
string Transport::get_departure()const{

	return departure;
}
string Transport::get_identifier()const{

	return identifier;
}
double Transport::get_price()const{

	return price;
}

void Transport::short_display()const{

	cout << "Departed " << get_depart_time() << " "<< get_departure() << " "

			<< get_identifier() << setw(2)  << " --------> " <<" Arrival "<< get_arrival_time()

			<< " " << get_destination() <<endl;
		cout << endl;
}
void Transport::display()const{

    cout << "Identifier " <<  setw(8)  <<" : " << get_identifier() << endl;

    cout << endl;

	cout << "Date" << setw(15) << get_depart_date() << endl;

	cout << endl;

	cout << endl;

	cout <<"Departure from" << setw(5) << " : "<< get_departure() << endl;

	cout << endl;

	cout <<"Destination"<< setw(8) << " : "<< get_destination() << endl;

	cout << endl;

	cout <<"BOARDING TIME " <<setw(5) << " : "<< get_depart_time() << endl;

	cout << endl;

	cout <<"LANDING TIME " <<setw(6) << " : "<< get_arrival_time() << endl;

}
void Transport::error_notification(string msg){

	cerr << msg << endl;
}

Transport::~Transport() {
	// TODO Auto-generated destructor stub
}

