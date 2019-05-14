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


	void set_price(double);

	void set_arrival_minute(int);

	void set_depart_minute(int);

	void set_depart_hour(int);


	void set_arrival_hour(int);

	void set_depart_day(int);

	void set_arrival_day(int);

	void set_month(int);

    void set_date(std::string);
	void set_year(int);

	void set_mean(std::string);

	/******************************** getter features ***********************************/

    std::string get_destination() const;

    std::string get_identifier()const;

    std::string get_departure() const;

    int get_depart_hour() const;

    int get_arrival_hour()const;

    int get_depart_minute() const;

    int get_arrival_minute()const;

    int get_depart_day() const;

    int get_arrival_day()const;

    int get_month() const;

    int get_year() const;

    double get_price() const;


    /********************** some useful methods for our transport object **************/

    void travel_time()const;

    void display()const;

    void short_display()const;

    void error_notification(std::string);

    friend class Administration;
private:
	std::string departure;
	std::string destination;
	std::string identifier;
	std::string error_msg;
	int depart_day;
	int arrival_day;
	int month;
	int year;
	int depart_hour;
	int arrival_hour;
    int depart_minute;
	int arrival_minute;
	double price;

};

#endif /* TRANSPORT_H_ */
