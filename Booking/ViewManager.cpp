/*
 * ManagerView.cpp
 *
 *  Created on: May 16, 2019
 *  Author: karatsuba
 */

#include "ViewManager.h"
#include <iostream>
#include <iomanip>

using namespace std;

ManagerView::ManagerView() {
	// TODO Auto-generated constructor stub


}
void ManagerView::view(){

	   booking_list_file_path = "reservation.txt";

	   bus_list_file_path = "bus.txt";

	   bool run = false;


	   while(!run){


		   Menu();

		   line_break();

		   switch(choice_from_user()){

		   case 1 :manager.booking_list(booking_list_file_path);
		   	       view();
		   	       run = true;
		   		   break;

		   case 2 :manager.bus_list(bus_list_file_path);
		          view();
		          run = true;
		          break;

		   case 3 :View::Menu();
		          run = true;
		          break;

		   default:View::invalid_choice_msg();
		           break;

		   }

	   }

}

void ManagerView::login_interface(){

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

	    string path = "admin.txt";

	    Connection con(path);

	    cout << endl;
	    cout <<"connecting as an administration member" << endl;cout << endl;

	    while(!state){

	    	cout <<"User.name : ";cin >> username;

			cout << endl;

			cout <<"Password  : ";cin >> password;

			if( con.login(username,password) == true){

				state = true;

				cout << endl;

				cout <<setw(50) <<"Welcome " << con.get_pseudo() << endl;

				view();

	    	}
			else{
				cout << endl;

				cout << "error not matching .. please try again " << endl;

				line_break();

				state = false;
			}

	    }

}
void ManagerView::Menu(){

	line_break();

	cout <<"1.Display booking list" << endl;

	line_break();

    cout <<"2.Display bus list" << endl;

    line_break();

	cout <<"3.Logout" << endl;

	line_break();
}

ManagerView::~ManagerView() {
	// TODO Auto-generated destructor stub
}
