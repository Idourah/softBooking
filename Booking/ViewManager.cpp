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

	   train_list_file_path = "train.txt";

	   flight_list_file_path = "fligth.txt";

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

		   case 3 :manager.train_list(train_list_file_path);
		          view();
		          run = true;
		          break;

		   case 4 :manager.flight_list(train_list_file_path);
		          view();
		          run = true;
		          break;

		   case 5:manager.new_bus(bus_list_file_path);
		  		  view();
		  		  run = true;
		  		  break;

		   case 6:manager.new_train(train_list_file_path);
		  		  view();
		  		  run = true;
		  		  break;

		   case 7 :manager.new_flight(flight_list_file_path);
		   		   run = true;
		   		   break;

		   case 8 :View::Menu();
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

	    cout <<endl;
	    cout<<"----------- Login ---------------"<<endl;
	    while(!state){
            cout << endl;

	    	cout<<"User.name : ";cin >> username;

			cout << endl;

			cout <<"Password  : ";cin >> password;

			cout << endl;


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
    cout <<setw(80)<<" ---------------------------------------"<<endl;
	cout <<setw(80)<<"|        1.Display booking list        |" << endl;
	cout <<setw(80)<<"|                                      |"<< endl;
    cout <<setw(80)<<" ---------------------------------------"<<endl;

    cout <<setw(80)<<"|        2.Display available bus       |" << endl;
	cout <<setw(80)<<"|                                      |"<< endl;
    cout <<setw(80)<<" ---------------------------------------"<<endl;

    cout <<setw(80)<<"|        3.Display available train     |" << endl;
	cout <<setw(80)<<"|                                      |"<< endl;
    cout <<setw(80)<<" ---------------------------------------"<<endl;

    cout <<setw(80)<<"|        4.Display available Flight    |" << endl;
	cout <<setw(80)<<"|                                      |"<< endl;
    cout <<setw(80)<<" ---------------------------------------"<<endl;

    cout <<setw(80)<<"|        5.add a bus program           |" << endl;
	cout <<setw(80)<<"|                                      |"<< endl;
    cout <<setw(80)<<" ---------------------------------------"<<endl;

    cout <<setw(80)<<"|        6.add a train program         |" << endl;
	cout <<setw(80)<<"|                                      |"<< endl;
    cout <<setw(80)<<" ---------------------------------------"<<endl;

    cout <<setw(80)<<"|        7.add a Flight program        |" << endl;
	cout <<setw(80)<<"|                                      |"<< endl;
    cout <<setw(80)<<" ---------------------------------------"<<endl;

    cout <<setw(80)<<"|        8.Logout                      |" << endl;
	cout <<setw(80)<<"|                                      |"<< endl;
    cout <<setw(80)<<" ---------------------------------------"<<endl;


}

ManagerView::~ManagerView() {
	// TODO Auto-generated destructor stub
}
