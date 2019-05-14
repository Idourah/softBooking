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

	depart_hour = 10;
	depart_minute = 45;
	depart_day = 11;
	month = 05;
	year = 2019;

	arrival_hour = 14;
	arrival_minute = 45;
	arrival_day = 11;
	month = 05;
	year = 2019;
	price = 350;


}
void Transport::set_depart_minute(int min){

    error_msg = "fatal error ! minutes can not be less than 0 or more than 59 please check";

	if(min < 0 || min > 59)

        error_notification(error_msg);
	else
		depart_minute = min;
}
void Transport::set_arrival_minute(int min){

    error_msg = "fatal error ! minutes can not be less than 0 or more than 59 please check";

	if(min < 0 || min > 59)

        error_notification(error_msg);
	else
		arrival_minute = min;
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

void Transport::set_year(int y){

    time_t now = time(0);

    tm *location = localtime(&now);

    int current_year = 1900 + location->tm_year;

    error_msg = "fatal error ! invalid year not less than ";

	if(y < current_year)

		cerr << error_msg << current_year << endl;

	else
		year = y;
}
void Transport::set_depart_hour(int hr){

    error_msg = "invalid format hour no greater than 12 or equal to 0 .please check ";

    /****** we check if the hour format is valid *******************/

    if(hr <= 0 || hr > 12)

    	error_notification(error_msg);

    else
    	depart_hour = hr;
 }

void Transport::set_arrival_hour(int hr){

    error_msg = "invalid format hour no greater than 12 or equal to 0 .please check ";

    /****** we check if the hour format is valid *******************/

    if(hr <= 0 || hr > 12)

    	error_notification(error_msg);

    else
    	depart_hour = hr;
 }
void Transport::set_depart_day(int d){
	 error_msg = "invalid day format no greater than 31 or equal to 0 .please check ";

	 if(d <= 0 || d > 31)

		 error_notification(error_msg);
	 else
		 depart_day = d;
}
void Transport::set_arrival_day(int d){
	 error_msg = "invalid day format no greater than 31 or equal to 0 .please check ";

	 if(d <= 0 || d > 31)

		 error_notification(error_msg);
	 else
		 arrival_day = d;
}

void Transport::set_month(int mon){
	 error_msg = "invalid month format no greater than 31 or equal to 0 .please check ";

	 if(mon <= 0 || mon > 12)

		 error_notification(error_msg);

	 else
		 month = mon;

}
void Transport::set_price(double prce){
	 error_msg = "invalid price format no less than 0.please check ";

	 /********* let's check if the price format is valid ***********/
	 if(prce <= 0 )

		 error_notification(error_msg);

	 else
		 price = prce;
}


int Transport::get_year()const{

	return year;
}
int Transport::get_depart_day()const{

	return depart_day;
}
int Transport::get_arrival_day()const{

	return arrival_day;
}
int Transport::get_month()const{

	return month;
}
int Transport::get_depart_minute()const{

	return depart_minute;
}
int Transport::get_arrival_minute()const{

	return arrival_minute;
}
int Transport::get_depart_hour()const{

	return depart_hour;
}
int Transport::get_arrival_hour()const{

	return arrival_hour;
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
void Transport::travel_time()const{

	int hour = arrival_hour - depart_hour;
	int minute = arrival_minute - depart_minute;

	cout <<"Duration " << setw(10) << " : "<< hour << " hour(s) " << minute << " minute(s)" << endl;
}
void Transport::short_display()const{

	cout << "Departed " << get_depart_hour() << ":"<< get_depart_minute() << " "<< get_departure() << " "

			<< get_identifier() << setw(2)  << " --------> " <<" Arrival "<< get_arrival_hour() << ":"

			<< get_arrival_minute() << " " << get_destination() << " "<< get_identifier() << setw(2)

			<< " " <<endl;
		cout << endl;
}
void Transport::display()const{

    cout << "Identifier " <<  setw(8)  <<" : " << get_identifier() << endl;

    cout << endl;

	cout << "Date" << setw(15) << " : " <<get_depart_day() << "-" << get_month() << "-"<< get_year() << endl;

	cout << endl;

	travel_time();

	cout << endl;

	cout <<"Departure from" << setw(5) << " : "<< get_departure() << endl;

	cout << endl;

	cout <<"Destination"<< setw(8) << " : "<< get_destination() << endl;

	cout << endl;

	cout <<"BOARDING TIME " <<setw(5) << " : "<< get_depart_hour() << "h:" << get_depart_minute() << " min"<< endl;

	cout << endl;

	cout <<"LANDING TIME " <<setw(6) << " : "<< get_arrival_hour() << "h:" << get_arrival_minute() << " min"<< endl;

}
void Transport::error_notification(string msg){

	cerr << msg << endl;
}
Transport& Transport::operator=(const Transport& t){


}
Transport::~Transport() {
	// TODO Auto-generated destructor stub
}

