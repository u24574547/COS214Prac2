#include <exception>
using namespace std;

#ifndef __SpecialsMenu_h__
#define __SpecialsMenu_h__

#include "Menus.h"

// class Menus;
class SpecialsMenu;

class SpecialsMenu: public Menus
{

	public: void notifyObservers(String aMessage);
};

#endif
