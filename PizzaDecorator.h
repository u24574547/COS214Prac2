#ifndef __PizzaDecorator_h__
#define __PizzaDecorator_h__
#include "Pizza.h"

class PizzaDecorator: public Pizza
{
	protected: 
		Pizza* pizza;
	public: 
		PizzaDecorator(Pizza* p) : pizza(p){}
		virtual ~PizzaDecorator();
		virtual double getPrice()const = 0;

		virtual string getName()const = 0;
};

#endif
