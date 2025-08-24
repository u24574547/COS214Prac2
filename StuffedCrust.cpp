#include "StuffedCrust.h"

double StuffedCrust::getPrice() const {
	return pizza->getPrice() + STUFFED_CRUST_PRICE;
}
string StuffedCrust::getName() const {
	return pizza->getName() + " with Stuffed Crust";
}

