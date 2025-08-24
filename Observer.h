#ifndef __Observer_h__
#define __Observer_h__

#include "Menus.h"

class Observer
{
	protected:
		Menus* _unnamed_Menus_;

	public: virtual void update(string aMessage) = 0;
};

#endif
