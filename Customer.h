#ifndef __Customer_h__
#define __Customer_h__
using namespace std;
#include <string>
#include "Observer.h"

// class Observer;
class Customer;

class Customer: public Observer
{
	public:
		void update(string aMessage);
};

#endif
