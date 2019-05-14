/*
 * Connexion.h
 *
 *  Created on: May 12, 2019
 *      Author: karatsuba
 */

#ifndef CONNEXION_H_
#define CONNEXION_H_
#include <iostream>

class Administration;

class Connexion {

public:
	Connexion(std::string);
	virtual ~Connexion();

	void login(std::string,std::string);
	bool check_password(std::string);
	bool check_pseudo(std::string);

	int rowCount(std::string);

	void name_fetching(std::string);
	void password_fetching(std::string);
    void logs(std::string);



	std::string pseudo_extract(std::stringstream&);
	std::string password_extract(std::stringstream&);


	void set_pseudo(std::string);
	void set_password(std::string);

	std::string get_pseudo()const;
	std::string get_password()const;

    friend class Administration;


private:
	std::string pseudo;
	std::string password;
	std::string *name_data_base = 0;
	std::string *password_data_base = 0;
	int rows = 0;
};

#endif /* CONNEXION_H_ */
