#include <exception>
using namespace std;

#include "ExtraCheese.h"
#include "PizzaDecorator.h"

double ExtraCheese::getPrice() const {
	return pizza->getPrice() + EXTRA_CHEESE_PRICE;
}
string ExtraCheese::getName() const {
	return pizza->getName() + " with Extra Cheese";
}

