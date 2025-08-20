#include <exception>
using namespace std;

#ifndef __Observer_h__
#define __Observer_h__

// #include "Menus.h"

class Menus;
class Observer;

__abstract class Observer
{
	public: Menus* _unnamed_Menus_;

	public: virtual void update(String aMessage) = 0;
};

#endif
