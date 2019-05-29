#ifndef FLIGHT_H
#define FLIGHT_H

#include "Transport.h"

class Flight :public Transport{

public:
    Flight();
	virtual ~Flight();

	void set_capacity(int);

	int get_capacity();

private:
	int capacity;
};


#endif // FLIGHT_H
