#include "Flight.h"

#include <iomanip>

using namespace std;


Flight::Flight():Transport(){

	capacity = 0;
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
