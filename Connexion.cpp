/*
 * Connexion.cpp
 *
 *  Created on: May 12, 2019
 *      Author: karatsuba
 */

#include "Connexion.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

Connexion::Connexion(string path) {
	// TODO Auto-generated constructor stub
	name_fetching(path);
	logs("fetching data from the database .....");
	password_fetching(path);
	cout << endl;
	logs("done !");

}
bool Connexion::check_password(string pass){

	bool match = false;
	int i = 0;

	while(!match && i < rows){
		if(pass.compare(password_data_base[i]) == 0){
          match = true;
		}
		else{
			match = false;
			i++;
		}
	}
	return match;
}
bool Connexion::check_pseudo(string username){
	bool match = false;
		int i = 0;

		while(!match && i < rows){
			if(username.compare(name_data_base[i]) == 0){
	          match = true;
			}
			else{
				match = false;
				i++;
			}
		}
		return match;
}
void Connexion::login(string username,string pass){


	if((check_password(pass) == true) && (check_pseudo(username) == true)){
		cout << endl;
		cout << "welcome " << username << endl;
	}
	else{
		cout << endl;
		cout << "error not matching .. please try again " << endl;
	}

}
void Connexion::logs(string msg){

   cout << msg<< endl;
}

void Connexion::name_fetching(string path){
	ifstream file(path);
	int rows = rowCount(path);
	name_data_base = new string[rows];

	string line;
	int i = 0;

	if(file.is_open()){
		while(!file.eof() && i < rows){
			getline(file,line);
			stringstream stream(line);
			name_data_base[i] = pseudo_extract(stream);
			i++;
		}
		file.close();
	}
	else {cerr <<"error when opening the file " << endl;}
}

void Connexion::password_fetching(string path){
	ifstream file(path);
	int rows = rowCount(path);
	password_data_base = new string[rows];

	string line;
	int i = 0;

	if(file.is_open()){
		while(!file.eof() && i < rows){
			getline(file,line);
			stringstream stream(line);
			password_data_base[i] = password_extract(stream);
			i++;
		}
		file.close();
	}
	else {cerr <<"error when opening the file " << endl;}
}
int  Connexion::rowCount(string file_path){

	ifstream file(file_path);
	string line;
	if(file.is_open()){
		while(!file.eof()){
			getline(file,line);
			rows++;
		}
		file.close();
	}
	else{ cerr<< "error when opening the file " << endl;}
	return rows;
}
string Connexion::pseudo_extract(stringstream & line){
	string pseudo;
    string pass;
	line >> pseudo >> pass;
	return pseudo;
}
string Connexion::password_extract(stringstream &line){

	string pseudo;
	string pass;
	line >> pseudo >> pass;
	return pass;
}

void Connexion::set_pseudo(string username){

	pseudo = username;
}
void Connexion::set_password(string pass){

	password = pass;
}
string Connexion::get_pseudo()const{

	return pseudo;
}
Connexion::~Connexion() {
	// TODO Auto-generated destructor stub
	delete [] name_data_base;
	delete [] password_data_base;
}



