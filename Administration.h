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
#include "Connection.h"

class Administration {
public:

					/**********************************************************************\

										CONSTRUCTORS AND DESTRUCTORS
					\                                                                      /
					 **********************************************************************/


	Administration(std::string);

	virtual ~Administration();


	 /**********************************************************************\

								   CLASS METHODS PROTOTYPES
	 \                                                                      /
	  **********************************************************************



    /************************************************************************
    *                                                                       *
    *                       login method prototype                          *
    *                                                                       *
    *************************************************************************/

	void login();

    /************************************************************************
    *                                                                       *
    *                       new_bus method prototype                        *
    *                                                                       *
    *************************************************************************/

	void new_bus(std::string);

    /************************************************************************
    *                                                                       *
    *                      new_flight method prototype                       *
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
    *                       record method prototype                       *
    *                                                                       *
    *************************************************************************/

	void record(Transport &,std::string);

	/***************************************************************************************
	*                                                                                      *
	*                     fecth_bus method prototype                                       *
	* this method allows us to retrieve bus objects stored into a file then stored them in *
	* our bus container																	   *
	* 																					   *								                                   *
	* @string path :this argument is the path of the file where our bus objects are stored *
	* 																					   *
	* @return a type vector reference that contains bus objects                            *
	***************************************************************************************/



	/************************************************************************
	*                                                                       *
	*                       rowCount method prototype                       *
	*                                                                       *
	*************************************************************************/

    int rowCount(std::string);

    void bus_list(std::string);



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

	Connection *con = 0;
	Transport *transport = 0;
	std::string pseudo;
	std::string password;
	int row = 0;

};

#endif /* ADMINISTRATION_H_ */
