/*
 * view.cpp
 *
 *  Created on: May 15, 2019
 *      Author: karatsuba
 */

#include "view.h"
#include "Administration.h"
#include "Connection.h"
#include "Reservation.h"
#include <iostream>
#include <iomanip>

using namespace std;

Administration manager;


void line_break(){
	cout << endl;
}


void Client_View(){

	Client_Menu();
}
void Client_Menu(){

	/*
	 *
	 */
	bool run = false;
	string bus_list = "bus.txt";
    string reservation = "reservation.txt";
    Reservation r;
    int choice,book,index;

	while(!run){

		line_break();

		cout <<"1.Display Bus program "   << endl;

		line_break();

		cout <<"2.Display Train Program " << endl;

		line_break();

		cout <<"3.Display Flight Program " << endl;

		line_break();

		cout <<"Select a program to display : ";cin >> choice;

		switch(choice){

		case 1:manager.bus_list(bus_list);line_break();

		      cout <<"do you want to book ? " << endl;

		      cout <<"1.Yes / 2.No :";cin >> book;

				  switch(book){

				   case 1:
						 line_break();

						 cout << setw(50) <<"INFORMATION PROVIDING" << endl;

						 r.book();

						 cout << "Program number :";cin >> index;

						 r.record(reservation,index);

						 line_break();

						 cout <<"Saved ...." << endl;

						 Client_Menu();

						 break;

				   case 2:Client_Menu();
						  break;

				   default:Client_Menu();break;

				  }run = true;break;



		default:cerr <<"sorry bad choice ! try again" << endl;
               break;

		}
	}
}

void Manager_Menu(){


	string booking ="reservation.txt";
	string bus_list = "bus.txt";
	int choice;
	bool run = false;
	cout << endl;
			while(!run){

				 cout <<"1.Display booking list" << endl;
				 cout << endl;
				 cout <<"2.Display bus list" << endl;
	             cout << endl;
	             cout <<"3.Logout" << endl;

	             line_break();

				 cout <<"Enter your choice :";cin >> choice;
				 cout << endl;
				 switch(choice){

				 case 1 :manager.booking_list(booking);
				         run = true;
				         Manager_Menu();
				         break;
				 case 2: manager.bus_list(bus_list);
				         run = true;
				         Manager_Menu();
				         break;
				 case 3:Main();
				      run = true;
				      break;
				 default:cerr <<"sorry bad choice ! try again" << endl;
	                     break;

				 }


			}
}

bool login(Connection &c){

	    /*
	     * this method allows the account manager to login by checking his details
	     *
	     *@argument :
	     *           Connection object to check the details
	     *
	     *@variables :
	     *          user name : the account manager name
	     *
	     *          password : the account manager  password
	     *
	     *          state : take the value true if the details match else false
	     *
	     * We ask the account manager to provide his login details.
	     *
	     * Then give them to login function to check if it matches the database.
	     *
	     * If yes we call the manager view else we ask him to try again.
	     */
	    string username;
	    string password;
	    bool state;

	    cout << endl;
	    cout <<"connecting as an administration member" << endl;cout << endl;

	    cout <<"User.name : ";cin >> username;

	    cout << endl;

	    cout <<"Password  : ";cin >> password;

		if( c.login(username,password) == true){

			state = true;

	        cout << endl;

	        cout <<setw(50) <<"Welcome " << c.get_pseudo() << endl;

			Manager_Menu();

		}
		else{
			cout << endl;
		    cout << "error not matching .. please try again " << endl;
		    state = false;
		}

		return state;


}
void Manager_View(){

    string path = "admin.txt";
    Connection con(path);

    bool success = false;
    while(!success){

    	if(login(con) == true){
    		success = true;
    	}
    	else{
    		success = false;
    		Manager_View();
    	}
    }


}

void Main(){

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

	    	    case 1: Manager_View();
	    	            run = true;
	    	            break;

	    	    case 2: Client_View();
	    	            run = true;
	    	            break;

	    	    default: cerr<<"invalid choice ! please choice between 1 and 2 " << endl;
	    	             run = false;
	    	             break;
	    	    }

	    }
}


