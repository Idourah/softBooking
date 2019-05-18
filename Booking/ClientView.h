/*
 * ClientView.h
 *
 *  Created on: May 16, 2019
 *      Author: karatsuba
 */

#ifndef CLIENTVIEW_H_
#define CLIENTVIEW_H_

#include "View.h"

class ClientView:public View{
public:
	ClientView();

	virtual ~ClientView();

	bool Booking_Suggestion();

	void view();
	void Menu();
};

#endif /* CLIENTVIEW_H_ */
