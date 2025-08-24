#ifndef __PizzaMenu_h__
#define __PizzaMenu_h__

#include "Menus.h"

class PizzaMenu: public Menus
{

	public: void notifyObservers(string aMessage);
};

#endif
