/*
 * Transport.h
 *
 *  Created on: May 9, 2019
 *      Author: karatsuba
 */

#ifndef TRANSPORT_H_
#define TRANSPORT_H_

#include <iostream>
class Administration;

class Transport {
public:

	/********************************* Constructor ***************************************/

	Transport();

	virtual ~Transport();

	/********************************* setter features **********************************/
	void set_destination(std::string);

	void set_departure(std::string);

	void set_identifier(std::string);

	void set_depart_time(std::string);

	void set_arrival_time(std::string);

	void set_depart_date(std::string);

	void set_arrival_date(std::string);

	void set_price(double);

	/******************************** getter features ***********************************/

    std::string get_destination() const;

    std::string get_identifier()const;

    std::string get_departure() const;

    std::string get_depart_time() const;

    std::string get_arrival_time()const;

    std::string get_depart_date() const;

    std::string get_arrival_date()const;

    double get_price() const;


    /********************** some useful methods for our transport object **************/

    void travel_time()const;

    void display()const;

    void short_display()const;

    void error_notification(std::string);

    friend class Administration;


protected:
	std::string departure;
	std::string destination;
	std::string identifier;

	std::string error_msg;

	std::string  depart_time;
	std::string depart_date;

	std::string arrival_time;
	std::string arrival_date;

	double price;


};

#endif /* TRANSPORT_H_ */
