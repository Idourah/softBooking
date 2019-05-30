#ifndef TRAIN_H

#define TRAIN_H



#include "Transport.h"



class Train :public Transport {



public:

	Train();

	virtual ~Train();

	static int train_id;

};



#endif /* TRAIN_H */
