#ifndef __Website_h__
#define __Website_h__
using namespace std;
#include <string>
#include <iostream>
#include "Observer.h"

class Website: public Observer
{
	public:
	Website(Menus* menu);
	void update(string aMessage);
};

#endif
