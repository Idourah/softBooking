/*
 * ClientView.cpp
 *
 *  Created on: May 16, 2019
 *      Author: karatsuba
 */

#include "ClientView.h"
#include <iostream>

using namespace std;

ClientView::ClientView() {

	// TODO Auto-generated constructor stub


}
void ClientView::view(){

	View::booking_list_file_path  = "reservation.txt";

		View::bus_list_file_path = "bus.txt";

		bool run = false;

		while(!run){

			Menu();

			switch(choice_from_user()){

			case 1:manager.bus_list(bus_list_file_path);//manager is a View attribute that Client_View inherit

			      line_break();

			      Booking_Suggestion();

			      run = true;

			      break;

			default:invalid_choice_msg();
			        break;

	        //we will case 2 and 3 when we create flight and train class
			}

		}

}
void ClientView::Menu(){

	line_break();

	cout <<"1.Display Bus program "   << endl;

	line_break();

	cout <<"2.Display Train Program " << endl;

	line_break();

	cout <<"3.Display Flight Program " << endl;

	line_break();
}
bool ClientView::Booking_Suggestion(){

	 int choice;

     bool state = false;

	 cout <<"do you want to book ? " << endl;

	 cout <<"1.Yes / 2.No :";cin >> choice;

	 switch(choice){

	 case 1 :state = true;
	        //we provide details by calling reservation method book before break
	        break;

	 case 2:view();break; //we go back to our client menu

	 default:view();break;//we go back to our client menu

	 }

	 return state;//we return our state variable true or false according to the client answer
}
ClientView::~ClientView() {
	// TODO Auto-generated destructor stub
}

