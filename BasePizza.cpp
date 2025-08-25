#include "BasePizza.h"

// All of our pizza's have assuming have cheese, space and dough
BasePizza::BasePizza(string name, PizzaComponent* toppings) {
	this->name = name;
	this->toppings = toppings;
}

BasePizza::~BasePizza() {
	if (toppings != NULL) {
		delete toppings;
		toppings = NULL;
	}
}

double BasePizza::getPrice() const {
	double basicPizzaPrice = 10.0 + 5.0 + 15.0; // Base price for dough, cheese, and sauce
	if (toppings != NULL) {
		return (toppings->getPrice() + basicPizzaPrice);
	}
	return basicPizzaPrice; // Return basic price if no toppings are set
}

string BasePizza::getName() const {
	if (toppings != NULL) {
		return name + " with " + toppings->getName();
	}
	return name; // Return just the name if no toppings are set
	// Or should i return margarita pizza?
	
}

Pizza* BasePizza::clone() const {
	if(toppings == NULL) {
		return new BasePizza(name, NULL);
	}
	else{
		return new BasePizza(name, toppings->clone());
	}
	
}


