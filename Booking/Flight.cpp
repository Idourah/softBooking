#include "Flight.h"

#include <iomanip>

using namespace std;

int Flight::flight_id = 10000;
Flight::Flight():Transport(){

	//we increment the id for the next flight
		flight_id++;

		//we concatenate the flight T + 2001 to give us a flight id with a format F2001

		string identifier = "F" + to_string(flight_id);

		//we give the flight a Id

		Flight::set_identifier(identifier);
;
}
void Flight::set_capacity(int cap){

	 if(cap <= 0){
		   cerr <<"invalid format " << endl;
	   }
	   else
		   capacity = cap;
}
int Flight::get_capacity(){

	return capacity;
}
Flight::~Flight() {
	// TODO Auto-generated destructor stub
}
