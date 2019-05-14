/*
 * Bus.h
 *
 *  Created on: May 12, 2019
 *      Author: karatsuba
 */

#ifndef BUS_H_
#define BUS_H_

#include "Transport.h"

class Bus :public Transport{

public:
	Bus(int);
	virtual ~Bus();

private:
	int capacity;
};

#endif /* BUS_H_ */
