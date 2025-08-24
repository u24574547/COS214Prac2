#ifndef __Website_h__
#define __Website_h__

#include "Observer.h"

// class Observer;
class Website;

class Website: public Observer
{

	public: void update(string aMessage);
};

#endif
