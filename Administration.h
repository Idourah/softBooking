/*
 * Administration.h
 *
 *  Created on: May 12, 2019
 *      Author: karatsuba
 */

#ifndef ADMINISTRATION_H_
#define ADMINISTRATION_H_

#include <iostream>
#include "Connexion.h"
#include "Transport.h"

class Administration {
public:
	Administration(std::string);
	virtual ~Administration();

	void login();
	void new_bus_program(std::string);
	void new_fligth_program();
	void new_train_program();

	void record(Transport &,std::string);


private:
	Connexion *con = 0;
	Transport *transport = 0;
	std::string pseudo;
	std::string password;

};

#endif /* ADMINISTRATION_H_ */
