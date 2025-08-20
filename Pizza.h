#include <exception>
using namespace std;

#ifndef __Pizza_h__
#define __Pizza_h__

// #include "PizzaDecorator.h"
// #include "Menus.h"
#include <string>
using namespace std;
// class PizzaDecorator;
class Menus;
class Pizza;

class Pizza
{
	public: 
		
		virtual double getPrice()const = 0;

		virtual string getName()const = 0;

		void printPizza() const;
};

#endif
