/*
 * Administration.cpp
 *
 *  Created on: May 12, 2019
 *      Author: karatsuba
 */

#include "Administration.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>



using namespace std;



Administration::Administration(){

	row = 0;
}
void Administration::new_bus(string path){

	/*
	 * thanks to this function a manager can add some bus programs
	 *
	 * then record them in a file using the record method
	 */
	//Transport *transport(0) ;
	Bus transport;

	string destination,departure,identifier,depart_time, depart_date, arrival_time, arrival_date;


	double price;

	cout << endl;

	cout <<"enter the departure spot   : ";cin>>departure;

	cout << endl;

	cout <<"enter the depart time (hint) 10am   : ";cin >> depart_time;

	cout << endl;

	cout <<"enter the depart date (hint) 05-02-2019 : ";cin >> depart_date;

	cout << endl;

	cout <<"enter the destination      : ";cin >> destination;

	cout << endl;

	cout <<"enter the arrival time          : ";cin >> arrival_time;

	cout << endl;

	cout <<"enter the arrival date          : ";cin >> arrival_date;

	cout << endl;

	cout << endl;

	cout <<"enter the price            :";cin>>price;


	transport.set_departure(departure);

	transport.set_depart_time(depart_time);

	transport.set_depart_date(depart_date);

	transport.set_destination(destination);

	transport.set_arrival_date(arrival_date);

	transport.set_arrival_time(arrival_time);

	transport.set_price(price);

	record(transport,path);

}
void Administration::new_train(string path){

	/*
	 * thanks to this function a manager can add some bus programs
	 *
	 * then record them in a file using the record method
	 */
	//Transport *transport(0) ;
	Train transport;

	string destination,departure,identifier,depart_time, depart_date, arrival_time, arrival_date;

	double price;


	cout << endl;

	cout <<"enter the departure spot   : ";cin >> departure;

	cout << endl;

	cout <<"enter the depart time (hint) 10am   : ";cin >> depart_time;

	cout << endl;

	cout <<"enter the depart date (hint) 05-02-2019 : ";cin >> depart_date;

	cout << endl;

	cout <<"enter the arrival time          : ";cin >> arrival_time;

	cout << endl;

    cout <<"enter the arrival date          : ";cin >> arrival_date;

	cout << endl;

	cout <<"enter the arrival time     : ";cin >> arrival_time;

	cout << endl;

	cout << endl;

	cout <<"enter the price            :";cin>>price;




	transport.set_departure(departure);

	transport.set_depart_time(depart_time);

	transport.set_depart_date(depart_date);

	transport.set_destination(destination);

	transport.set_arrival_date(arrival_date);

	transport.set_arrival_time(arrival_time);

	transport.set_price(price);

	record(transport,path);

}
void Administration::new_flight(string path){

	/*
	 * thanks to this function a manager can add some bus programs
	 *
	 * then record them in a file using the record method
	 */
	//Transport *transport(0) ;
	Flight transport;

	string destination,departure,identifier,depart_time, depart_date, arrival_time, arrival_date;



	double price;

	cout << endl;

	cout <<"enter the departure spot        : ";cin >> departure;

	cout << endl;

	cout <<"enter the depart time (hint) 10am   : ";cin >> depart_time;

	cout << endl;

	cout <<"enter the depart date (hint) 05-02-2019 : ";cin >> depart_date;

	cout << endl;

	cout <<"enter the destination           : ";cin >> destination;

	cout << endl;


	cout <<"enter the arrival time          : ";cin >> arrival_time;

	cout << endl;

	cout <<"enter the arrival date          : ";cin >> arrival_date;

	cout << endl;

	cout << endl;

	cout <<"enter the price                 :";cin>>price;




	transport.set_departure(departure);

	transport.set_depart_time(depart_time);

	transport.set_depart_date(depart_date);

	transport.set_destination(destination);

	transport.set_arrival_date(arrival_date);

	transport.set_arrival_time(arrival_time);

	transport.set_price(price);

	record(transport,path);

}
int  Administration::rowCount(string file_path){

	/*
	 * rowCount count the line numbers that the file contains
	 *
	 * path is the name of the file
	 */

	ifstream file(file_path);

	string line;

	if(file.is_open()){

		while(!file.eof()){

			getline(file,line);

			row++;
		}
		file.close();
	}
	else{cerr<< "error when opening the file " << endl;}

	return row;
}


void Administration::bus_list(string path){


	/*
	 * @ this function display buses that are available
	 *
	 * path is the name of the file where the buses are stored
	 */
	ifstream file(path);

	int index = 0; //the index allows us

	string line;

	if(file.is_open()){

        cout << setw(50) <<"Available Bus" << endl;

        cout << endl;

		while(!file.eof()){

			getline(file,line);

            index++;

			cout << index << "."<< line << endl;

			cout << endl;

		}

		file.close();
	}
	else{
		cerr << "Error when opening the file " << endl;
	}
}

void Administration::train_list(string path){


	/*
	 * @ this function display buses that are available
	 *
	 * path is the name of the file where the buses are stored
	 */
	ifstream file(path);

	int index = 0; //the index allows us

	string line;

	if(file.is_open()){

        cout << setw(50) <<"Available Train " << endl;

        cout << endl;

		while(!file.eof()){

			getline(file,line);

            index++;

			cout << index << "."<< line << endl;

			cout << endl;

		}

		file.close();
	}
	else{
		cerr << "Error when opening the file " << endl;
	}
}
void Administration::flight_list(string path){


	/*
	 * @ this function display buses that are available
	 *
	 * path is the name of the file where the buses are stored
	 */
	ifstream file(path);

	int index = 0; //the index allows us

	string line;

	if(file.is_open()){

        cout << setw(50) <<"Available Flight " << endl;

        cout << endl;

		while(!file.eof()){

			getline(file,line);

            index++;

			cout << index << "."<< line << endl;

			cout << endl;

		}

		file.close();
	}
	else{
		cerr << "Error when opening the file " << endl;
	}
}
void Administration::record(Transport &t,string path){

	/*
	 * @ this function record a transport program in a file
	 *
	 * path is the name of the file we want to record our transport program
	 */

	ofstream file(path,ios_base::app);

	if(file.is_open()){

		file <<"From [ " << t.get_departure() << "]  "<< "  at [ " << t.get_depart_time() << " ] " << "  date [ " << t.get_depart_date() << " ]  "<< "  booking id [ " << t.get_identifier() << " ] "<< " -----> To [ "

	        << t.get_destination() << " ] "<< "  at [ " << t.get_arrival_time() << " ] "<<"  date [" << t.get_arrival_date() << " ] "<< " price [ "<< t.get_price() << " $ ]" << endl;

		file.close();
	}
	else{cerr<<"error when opening a file " << endl;}
}
void Administration::booking_list(string path){

	/*
	 * this function display a list of persons that booked and the detail of their booking
	 *
	 * path is the file name where the booking are stored
	 */

	ifstream file(path);
	string lines;

	if(file.is_open()){

		cout << setw(50) <<" Booking LIST " << endl;

		cout << endl;

		while(!file.eof()){

			getline(file,lines);

			cout << lines << endl;
			cout << endl;

		}
	}
}
string Administration::get_pseudo(){

	return pseudo;
}

Administration::~Administration() {
	// TODO Auto-generated destructor stub



}

