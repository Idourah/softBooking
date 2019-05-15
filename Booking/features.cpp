/*
 * features.cpp
 *
 *  Created on: May 12, 2019
 *      Author: karatsuba
 */


#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

string login(stringstream &str){
	string pseudo;
	string pass;

	str >> pseudo >> pass;

	return pseudo;
}
bool login_checking(string &pseudo, string &password,string &pscheck,string psscheck){

	if((pseudo.compare(pscheck) == 0) && (password.compare(psscheck) == 0)){

		return true;
	}
	else{

		return false;
	}
}
string get_pseudo(stringstream &str){

	string pseudo;

	str >> pseudo;

	return pseudo;
}
bool existing_account(string &pseudo,string path){

	ifstream file(path);
	string line;
	stringstream user;
	bool found = false;


	if(file){

		//we check if the file has been opened

		while(!file.eof() && !found){

            //let 's read every single line of the file
			getline(file,line);

			//we settle the line as a content for our stringstream to extract the pseudo later on
			user.str(line);

			/*get_pseudo extract the pseudo for us then compare it with the one given by the user
			  if it equal to zero it means that the account already exists and return true */

			if(get_pseudo(user).compare(pseudo) == 0){

				found = true;
				file.close();
			}
			else
				//account does'nt exist yet
				found = false;
		}
	}

	else{

		cerr << "error while opening the file " << endl;
	}

	return found;

}
void login_up(string &pseudo,string &password){

	//we create a file to be opened later on
	ofstream file("admin.txt",ios_base::app);

	if((!pseudo.empty()) || (!password.empty())){

       if((pseudo.length() > 8)){

    	   //let's check if the account already exists
    	   if(existing_account(pseudo,"admin.txt") == false){

    		   if(file.is_open()){

    			   // if the account does not exist then we add it
    		       file << endl;

    		       file << pseudo << " "  << password << endl;

    		       file.close();

    		   }
    		   else
    			   //in case where the file encountered some problem
    		       cerr << "error while opening the file" << endl;

    	   }

    	   else {
    		   //the administrator account already exists

    		   cerr << "administrator already exists " << endl;
    	   }
       }

       else {
    	   // the pseudo is less than 8 characters

    	   cerr << "error pseudo to short " << endl;
       }
	}

	else {

		// if our fields are empty
		cerr << "error empty fields " << endl;
	}


}
int rowCount(string file_path){

	ifstream file(file_path);
	string line;
	int count = 0;
	if(file.is_open()){
		while(!file.eof()){
			getline(file,line);
			count++;

		}
	}
	return count;
}
