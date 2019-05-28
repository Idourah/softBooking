/*
 * Administration.h
 *
 *  Created on: May 12, 2019
 *      Author: karatsuba
 */

#ifndef ADMINISTRATION_H_
#define ADMINISTRATION_H_

#include <iostream>
#include <vector>
#include "Transport.h"
#include "Bus.h"


class Administration {
public:

					/**********************************************************************\

										CONSTRUCTORS AND DESTRUCTORS
					\                                                                      /
					 **********************************************************************/

	Administration();

	virtual ~Administration();


	 /**********************************************************************\

								   CLASS METHODS PROTOTYPES
	 \                                                                      /
	  **********************************************************************/





	void new_bus(std::string);

    /************************************************************************
    *                                                                       *
    *                      new_flight method prototype                      *
    *                                                                       *
    *************************************************************************/

	void new_flight();

    /************************************************************************
    *                                                                       *
    *                       new_train method prototype                      *
    *                                                                       *
    *************************************************************************/

	void new_train();

    /************************************************************************
    *                                                                       *
    *                       record method prototype                         *
    *                                                                       *
    *************************************************************************/

	void record(Transport &,std::string);

	/************************************************************************
    *                                                                       *
	*                    booking_list method prototype                      *
    *															            *
	*************************************************************************/

    void booking_list(std::string);

	/************************************************************************
	*                                                                       *
	*                       rowCount method prototype                       *
	*                                                                       *
	*************************************************************************/

    int rowCount(std::string);

    void bus_list(std::string);

    std::string get_pseudo();



private:

    /****************************************************************************************************
    *                                                                           						*
	*                                                                           						*
	* Connection : the pointer use to connect a an administration member                                *
	*                                                                           						*
	* Transport  : we use this pointer to create our transport object like bus etc..        		    *
	*                                                                           						*
	* pseudo     : this is the user name used to login							         				*
	*																									*
	* password   : the password used to login                                   			            *
	*****************************************************************************************************/



	std::string pseudo;

	std::string password;

	int row;

};

#endif /* ADMINISTRATION_H_ */
