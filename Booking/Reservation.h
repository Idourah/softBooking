/*
 * Reservation.h
 *
 *  Created on: May 14, 2019
 *      Author: karatsuba
 */

#ifndef RESERVATION_H_
#define RESERVATION_H_
#include <iostream>
#include "Transport.h"

class Reservation {
public:
	Reservation();
	Reservation(std::string,std::string,std::string,int);
	virtual ~Reservation();

	void set_first_name(std::string);
	void set_last_name(std::string);
	void set_email_add(std::string);


    void book();

	std::string get_first_name()const;
	std::string get_last_name()const;
	std::string get_email_add()const;
	int get_id()const;
	int get_index()const;

	void record(std::string path,int);

	static int count;

private:
	 /****************************************************************************
	  *                                                                           *
	  *                                                                           *
	  * pointer : the pointer used to create array                                *
	  *                                                                           *
	  * nextIndex : use in the default constructor                                *
	  *                                                                           *
	  * length the array size                                                     *
	  *****************************************************************************/
	std::string first_name;
	std::string last_name;
	std::string email_add;
	int id;
	int index;

};

#endif /* RESERVATION_H_ */
