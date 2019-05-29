#ifndef TRAIN_H

#define TRAIN_H



#include "Transport.h"



class Train :public Transport {



public:

	Train();

	virtual ~Train();



	void set_capacity(int);



	int get_capacity();



private:

	int capacity;

};



#endif /* TRAIN_H */