#ifndef __Customer_h__
#define __Customer_h__
using namespace std;
#include <string>
#include <iostream>
#include "Observer.h"

// class Observer;
class Customer;

class Customer: public Observer
{
	public:
	Customer(Menus* menu);
		void update(string aMessage);
};

#endif
