#ifndef __Pizza_h__
#define __Pizza_h__
using namespace std;
// #include "PizzaDecorator.h"
// #include "Menus.h"
#include <string>
using namespace std;

class Pizza
{
	public: 
		
		virtual double getPrice()const = 0;

		virtual string getName()const = 0;

		void printPizza() const;
};

#endif
