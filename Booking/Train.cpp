#include "Train.h"

#include <iomanip>



using namespace std;


Train::Train() :Transport() {


	capacity = 0;

}

void Train::set_capacity(int cap) {



	if (cap <= 0) {

		cerr << "invalid format " << endl;

	}

	else

		capacity = cap;

}

int Train::get_capacity() {



	return capacity;

}

Train::~Train() {

	// TODO Auto-generated destructor stub

}

