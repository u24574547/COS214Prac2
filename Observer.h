#ifndef __Observer_h__
#define __Observer_h__
#include <string>
using namespace std;
//#include "Menus.h"
class Menus;

class Observer
{
	protected:
		Menus* _unnamed_Menus_;

public:
	Observer(Menus* menu);
	virtual ~Observer();
	virtual void update(string aMessage) = 0;
};

#endif
