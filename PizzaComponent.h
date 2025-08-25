#ifndef __PizzaComponent_h__
#define __PizzaComponent_h__
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
		virtual PizzaComponent* clone() const = 0;
};

#endif
