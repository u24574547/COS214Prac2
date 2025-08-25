#include "ExtraCheese.h"

double ExtraCheese::getPrice() const {
	return pizza->getPrice() + EXTRA_CHEESE_PRICE;
}

string ExtraCheese::getName() const {
	return pizza->getName() + " with Extra Cheese";
}

Pizza* ExtraCheese::clone() const{
	return new ExtraCheese(pizza->clone());
}