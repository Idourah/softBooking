/*
 * View.h
 *
 *  Created on: May 16, 2019
 *      Author: karatsuba
 */

#ifndef VIEW_H_
#define VIEW_H_

#include <iostream>
#include "Administration.h"


class View {

public:

	View();

	virtual ~View();

	void Menu();

	void set_booking_file_path(std::string);

	void set_bus_list_file_path(std::string);

	void set_train_list_file_path(std::string);

	void set_flight_list_file_path(std::string);

    void invalid_choice_msg();

	int choice_from_user();

	void line_break();

protected:
	std::string booking_list_file_path;

	std::string bus_list_file_path;

	std::string train_list_file_path;

	std::string flight_list_file_path;

	Administration manager;





};

#endif /* VIEW_H_ */
