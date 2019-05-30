#include "Train.h"
#include <iomanip>


using namespace std;

//we start to generate train id from 2000
int Train::train_id = 2000;



Train::Train() :Transport() {
    //we increment the id for the next train
	train_id++;

	//we concatenate the train T + 2001 to give us a train id with a format T2001

	string identifier = "T" + to_string(train_id);

	//we give the train a Id

	Train::set_identifier(identifier);
}

Train::~Train() {

	// TODO Auto-generated destructor stub

}

