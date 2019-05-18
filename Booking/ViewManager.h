/*
 * ViewManager.h
 *
 *  Created on: May 16, 2019
 *      Author: karatsuba
 */

#ifndef VIEWMANAGER_H_
#define VIEWMANAGER_H_

#include "View.h"
#include "Administration.h"
#include "Connection.h"

class ManagerView :public View {

public:
	ManagerView();

	virtual ~ManagerView();

	void view();

	void Menu();

	void Connection_interface();

	void login_interface();

};

#endif /* VIEWMANAGER_H_ */
