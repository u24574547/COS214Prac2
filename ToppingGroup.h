#ifndef __ToppingGroup_h__
#define __ToppingGroup_h__
using namespace std;
#include "PizzaComponent.h"
#include <vector>
// class PizzaComponent;
// Should we add functionality to remove a topping?
// It is funny to just assume our customers do not make mistakes
class ToppingGroup: public PizzaComponent
{
	private: 
		vector<PizzaComponent*> toppings;
		string name; // Name of the topping group
	public: 
		ToppingGroup(string name);
		~ToppingGroup();
		void add(PizzaComponent* component);
		virtual string getName() const override;
		virtual double getPrice() const override;
};

#endif
