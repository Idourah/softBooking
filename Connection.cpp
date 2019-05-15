/*
 * Connection.cpp
 *
 *  Created on: May 12, 2019
 *      Author: karatsuba
 */

#include "Connection.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;



Connection::Connection(string path) {
	// TODO Auto-generated constructor stub

	/* @argument:
	 *          @ path : the file path that contains users's pseudo and passwords
	 *
	 * @description:
	 *
	 * When we create a connection object we are going to retrieve data from the file.
	 *
	 * Then take all pseudo and passwords present in the file to get them ready to use.
	 *
	 * We call name_fetching function to retrieve all pseudo and password_fetching to retrieve all passwords
	 *
	 * We print some messages to inform the user about the process
	 *
	 */
	Query(path);

}

			/************************************************************************
			*                                                                       *
			*                            login method                               *
			*																		*
			*************************************************************************/

bool Connection::login(string username,string pass){

     bool success = false;


     /*@user name : user pseudo or user name
     *
     * @ pass     : user password
     *
     * we firstly check if the given password and user name match the database
     *
     * if functions check_password and check_pseudo return true it means that both match
     *
     * then we say welcome to the user.
     *
     * else we print a not matching error to inform that the data don't match the database
     *
     */
     int i = 0;
      while(!success && i < rows){

    	  if(data_base[i].username.compare(username) == 0 && data_base[i].pass.compare(pass) == 0){
    	      success = true;
    	      pseudo = username;
    	   }
    	  else{i++;}

      }
	return success;
}




                /************************************************************************
				*                                                                       *
				*                         rowCount method                               *
				*																		*
				*************************************************************************/

int  Connection::rowCount(string file_path){

    /*@arguments:
     *         @ path : the file path where passwords and pseudo are stored
     *
     *@variables:
     *          @ file  : an object to open the file
     *          @ lines : the file lines
     *          @ rows  : the number of rows or lines that the file contains
     *
     * we first check if the file is open if yes we get the file lines then increment rows in line 184
     *
     * while we are not at the end of the file in line 185
     *
     * else we print error message in line 193
     *
     * once we reach the end of a file we close  the file (line 193) and return rows (line 194)
     */
	ifstream file(file_path);

	string lines;

	if(file.is_open()){
		while(!file.eof()){

			getline(file,lines);

			rows++;
		}
		file.close();
	}
	else{ cerr<< "error when opening the file " << endl;}

	return rows;
}


			/************************************************************************
			*                                                                       *
			*                         name_fecthing method                          *
			*																		*
			*************************************************************************/

void Connection::Query(string path){

	/*
	 * @argument:
	 *          @ path :the file path that contains users pseudo
	 *
	 * @variables:
	 *          @ file : use to open the file
	 *          @ rows : to get the number line that the file contains
	 *          @ i    : an integer use to index the array
	 *
	 *          @ name_data_base : array to store pseudo coming from the file
	 *          @ line           : the file line
	 *
	 *          @ stream : stream object to get file lines in the format << pseudo << password then extract the pseudo
	 *
	 * we first open the file then check if it is opened
	 *
	 * if yes while we don't reach the end of the file and (i) is less than rows
	 *
	 * we get the file line store it into a stream object that we give to extract the pseudo function
	 *
	 * once we extract the pseudo we store it in our data_base[] array and increment i
	 *
	 * if we reach the end we close the file
	 *
	 * we print an error message when the file is not opened
	 */
	ifstream file(path);

	int rows = rowCount(path);

	data_base = new manager[rows];

	string line;
	int i = 0;

	if(file.is_open()){
		while(!file.eof() && i < rows){

			getline(file,line);

			stringstream stream(line);

             stream >>pseudo >> password;
			 data_base[i].username = pseudo;
			 data_base[i].pass = password;
			i++;
		}
		file.close();
	}
	else {cerr <<"error when opening the file " << endl;}
}


            /************************************************************************
			*                                                                       *
			*                         logs method                                   *
			*																		*
			*************************************************************************/
void Connection::logs(string msg){

   cout << msg<< endl;
}


            /************************************************************************
			*                                                                       *
			*                         get_pseudo method                             *
			*																		*
			*************************************************************************/
string Connection::get_pseudo()const{

	return pseudo;
}

			/************************************************************************
			*                                                                       *
			*                         destructor method                             *
			*																		*
			*************************************************************************/
Connection::~Connection() {
	// TODO Auto-generated destructor stub

	/*
	 * we release memories that have been dynamically allocated to name_data_base
	 *
	 * and password_data_base pointers in name_fetching( ) and password_fetching( )
	 */
	delete [] data_base;

}



