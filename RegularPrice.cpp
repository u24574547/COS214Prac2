#include "RegularPrice.h"

double RegularPrice::applyDiscount(double total, int numPizza) const {
	// No discount applied
	return total;
}

std::string RegularPrice::getType() {
	return "RegularPrice";
}
