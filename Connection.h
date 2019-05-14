/*
 * Connection.h
 *
 *  Created on: May 12, 2019
 *      Author: karatsuba
 */

#ifndef CONNECTION_H_
#define CONNECTION_H_
#include <iostream>

class Administration;

class Connection {

public:

				/**********************************************************************\

									CONSTRUCTORS AND DESTRUCTORS
				\                                                                      /
				 **********************************************************************/

	Connection(std::string);

	virtual ~Connection();


				 /**********************************************************************\

											   CLASS METHODS PROTOTYPES
				 \                                                                      /
				  **********************************************************************



    /************************************************************************
    *                                                                       *
    *                            login method prototype                     *
    *                                                                       *
    *************************************************************************/
	void login(std::string,std::string);


    /************************************************************************
    *                                                                       *
    *                   check_password method prototype                     *
    *                                                                       *
    *************************************************************************/
	bool check_password(std::string);


    /************************************************************************
    *                                                                       *
    *                            check_pseudo method prototype              *
    *                                                                       *
    *************************************************************************/
	bool check_pseudo(std::string);


    /************************************************************************
    *                                                                       *
    *                       rowCount method prototype                       *
    *                                                                       *
    *************************************************************************/

	int rowCount(std::string);


    /************************************************************************
    *                                                                       *
    *                      name_fetching method prototype                   *
    *                                                                       *
    *************************************************************************/

	void name_fetching(std::string);


    /************************************************************************
    *                                                                       *
    *                       password_fetching method prototype              *
    *                                                                       *
    *************************************************************************/

	void password_fetching(std::string);


    /************************************************************************
    *                                                                       *
    *                       logs method prototype                           *
    *                                                                       *
    *************************************************************************/

    void logs(std::string);


    /************************************************************************
    *                                                                       *
    *                       pseud_extract method prototype                  *
    *                                                                       *
    *************************************************************************/
	std::string pseudo_extract(std::stringstream&);


    /************************************************************************
    *                                                                       *
    *                     password_extract method prototype                 *
    *                                                                       *
    *************************************************************************/

	std::string password_extract(std::stringstream&);


    /************************************************************************
    *                                                                       *
    *                       set_pseudo method prototype                     *
    *                                                                       *
    *************************************************************************/

	void set_pseudo(std::string);


    /************************************************************************
    *                                                                       *
    *                       set_password method prototype                   *
    *                                                                       *
    *************************************************************************/

	void set_password(std::string);


    /************************************************************************
    *                                                                       *
    *                       get_psuedo method prototype                     *
    *                                                                       *
    *************************************************************************/


	std::string get_pseudo()const;


    /************************************************************************
    *                                                                       *
    *                       get_password method prototype                   *
    *                                                                       *
    *************************************************************************/

	std::string get_password()const;


    /**********************************************************************************
    *                                                                                 *
    *  we declare the class Administration as friend to underline encapsulation       *
    *                                                                                 *
    *  in our design so Administration will access Connection class members           *
    ***********************************************************************************/

    friend class Administration;


private:
	std::string pseudo;
	std::string password;
	std::string *name_data_base = 0;
	std::string *password_data_base = 0;
	int rows = 0;
};

#endif /* CONNECTION_H_ */
