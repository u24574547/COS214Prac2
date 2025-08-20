#include <exception>
using namespace std;

#ifndef __StuffedCrust_h__
#define __StuffedCrust_h__

#include "PizzaDecorator.h"

// class PizzaDecorator;
class StuffedCrust;

class StuffedCrust: public PizzaDecorator
{
	private:
		static const double STUFFED_CRUST_PRICE = 20.00;
	public: 
		StuffedCrust(Pizza* p) : PizzaDecorator(p) {}
		virtual ~StuffedCrust() {}
		virtual double getPrice() const;

		virtual string getName() const;
};

#endif
