/*
 * Connection.h
 *
 *  Created on: May 12, 2019
 *      Author: karatsuba
 */

#ifndef CONNECTION_H_
#define CONNECTION_H_
#include <iostream>


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
    *                       login method prototype                          *
    *                                                                       *
    *************************************************************************/
	bool login(std::string,std::string);



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

	void Query(std::string);



    /************************************************************************
    *                                                                       *
    *                       logs method prototype                           *
    *                                                                       *
    *************************************************************************/

    void logs(std::string);


    /************************************************************************
    *                                                                       *
    *                       get_psuedo method prototype                     *
    *                                                                       *
    *************************************************************************/


	std::string get_pseudo()const;


private:
    /*
     * @ pseudo   : user pseudo
     *
     * @ password : user password
     *
     * @ rows     : the number of line that  files contain
     *
     * @ name_data_base     : pointer for the name_data_base structure
     *
     * @ password_data_base : pointer for the password_data_base structure
     */

	struct manager{std::string username;std::string pass;};

	std::string pseudo;

	std::string password;

	manager *data_base = 0;

	int rows = 0;



};

#endif /* CONNECTION_H_ */

    /*
       @ code different

                     @ think different

                                       @ design different


                                       We Love Code                                 */
