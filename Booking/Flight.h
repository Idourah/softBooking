#ifndef FLIGHT_H
#define FLIGHT_H

#include "Transport.h"

class Flight :public Transport{

public:
    Flight();
	virtual ~Flight();


	static int flight_id;

};


#endif // FLIGHT_H
