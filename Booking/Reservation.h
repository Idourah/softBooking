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
#include "Bus.h"

class Reservation {
public:
	Reservation();
	virtual ~Reservation();

	void set_first_name(std::string);
	void set_last_name(std::string);
	void set_email_add(std::string);
	void set_index(std::string);

    void book();

	std::string get_first_name()const;
	std::string get_last_name()const;
	std::string get_email_add()const;
    std::string get_booking_id()const;

	void record(std::string path);

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
	std::string booking_id;



};

#endif /* RESERVATION_H_ */
