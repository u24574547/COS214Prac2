#ifndef __BasePizza_h__
#define __BasePizza_h__

#include "PizzaComponent.h"
#include "Pizza.h"
using namespace std;

class BasePizza: public Pizza
{
	private: 
	//Changed to a pointer to PizzaComponent to allow for dynamic allocation of toppings
		PizzaComponent* toppings;
		string name;
	

	public: 
		virtual double getPrice() const override;

		virtual string getName()const override;

		BasePizza(string name, PizzaComponent* toppings);
		virtual ~BasePizza();
};

#endif
