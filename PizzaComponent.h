#ifndef __PizzaComponent_h__
#define __PizzaComponent_h__

// #include "ToppingGroup.h"
// #include "BasePizza.h"

// class ToppingGroup;
#include <string>
using namespace std;

class PizzaComponent
{
	protected: 
		double price;
		string name;
	public: 
		PizzaComponent();
		virtual ~PizzaComponent();

		virtual string getName()const = 0;

		virtual double getPrice()const = 0;
};

#endif
