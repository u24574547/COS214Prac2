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
		Pizza* decorator;
		string name;
	

	public:
		BasePizza(string name, PizzaComponent *toppings);

		virtual ~BasePizza();

		virtual double getPrice() const override;

		virtual string getName()const override;


		virtual Pizza* clone() const override;
};

#endif
