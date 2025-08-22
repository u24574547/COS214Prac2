#ifndef __ExtraCheese_h__
#define __ExtraCheese_h__
#include "PizzaDecorator.h"
using namespace std;

class ExtraCheese: public PizzaDecorator
{
	private:
		static const double EXTRA_CHEESE_PRICE = 12.00;

	public: 
		ExtraCheese(Pizza* p) : PizzaDecorator(p) {}
		virtual ~ExtraCheese() {}
		virtual double getPrice()const;

		virtual string getName()const;
};

#endif
