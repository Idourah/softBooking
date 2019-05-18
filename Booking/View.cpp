/*
 * View.cpp
 *
 *  Created on: May 16, 2019
 *  Author: karatsuba
 */

#include "View.h"
#include "ViewManager.h"
#include "ClientView.h"
#include <iostream>
#include <iomanip>

using namespace std;

View::View(){
	// TODO Auto-generated constructor stub
}

void View::Menu(){

	    ManagerView view;
		ClientView client;

		int choice;

	    bool run = false;

	    cout << setw(50) <<"Welcome to softBooking " << endl;

		cout << "Please choice according to your needs" << endl;

		cout << endl;

		cout <<"1.SoftBooking Manager " << endl;

		cout << endl;

		cout <<"2.SoftBooking Client  " << endl;

		cout << endl;

		cout <<"Enter your choice ! waiting ...:";cin >>choice;

		    while(!run){

		    	switch(choice){

		    	    case 1:view.login_interface();
		    	            run = true;
		    	            break;

		    	    case 2:client.view();
		    	            run = true;
		    	            break;

		    	    default: cerr<<"invalid choice ! please choice between 1 and 2 " << endl;
		    	             run = false;
		    	             break;
		    	    }

		    }

}
void View::line_break(){

	cout << endl;
}
int View::choice_from_user(){

	int choice;

	cout <<"Enter a choice : ";cin >> choice;

	return choice;
}
void View::invalid_choice_msg(){

	cerr <<"sorry bad choice ! try again" << endl;
}
void View::set_booking_file_path(string path){

	booking_list_file_path = path;
}
void View::set_bus_list_file_path(string path){

	bus_list_file_path = path;
}
void View::set_flight_list_file_path(string path){
	flight_list_file_path = path;
}
void View::set_train_list_file_path(string path ){

	train_list_file_path  = path;
}
View::~View() {
	// TODO Auto-generated destructor stub
}

