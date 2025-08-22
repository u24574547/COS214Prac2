#include "ToppingGroup.h"
#include "PizzaComponent.h"
#include <sstream>
#include <vector>
// Should we stop them from adding mutltiple of the same toppings?
ToppingGroup::ToppingGroup(string name){
	this->name = name;
}
ToppingGroup::~ToppingGroup() {
	// ripped this logic off GG idk if this works
	for (int i = 0; i < toppings.size(); i++) {
            delete toppings[i];
    }
    toppings.clear();
}

// I changed this function to take a PizzaComponent pointer instead of a value
void ToppingGroup::add(PizzaComponent* component) {
	toppings.push_back(component);
}

string ToppingGroup::getName() const {
	stringstream output(name);
	output << "(";
	for (int i =0; i < toppings.size(); i ++){
		output << toppings[i]->getName();
		if (i < toppings.size() - 1) {
			output << ", ";
		}
		
	}
	output << ")";
	return output.str(); // Return the name of the topping group with all toppings

}

double ToppingGroup::getPrice() const {
	double total = 0.0;
    for (int i = 0; i < toppings.size(); i++) {
        total += toppings[i]->getPrice();
    }
    return total;
}

