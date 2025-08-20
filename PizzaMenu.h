#include <exception>
using namespace std;

#ifndef __PizzaMenu_h__
#define __PizzaMenu_h__

#include "Menus.h"

// class Menus;
class PizzaMenu;

class PizzaMenu: public Menus
{

	public: void notifyObservers(String aMessage);
};

#endif
