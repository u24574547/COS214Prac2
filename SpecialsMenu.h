#ifndef __SpecialsMenu_h__
#define __SpecialsMenu_h__

#include "Menus.h"

class SpecialsMenu: public Menus
{

	public:
	SpecialsMenu();
	~SpecialsMenu();
	string toString();
	void notifyObservers(string aMessage);
};

#endif
