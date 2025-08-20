#include <exception>
using namespace std;

#ifndef __Customer_h__
#define __Customer_h__

#include "Observer.h"

// class Observer;
class Customer;

class Customer: public Observer
{

	public: void update(String aMessage);
};

#endif
