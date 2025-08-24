#include "FamilyDiscount.h"

FamilyDiscount::FamilyDiscount(double discount) {
	discountRate = discount;
}

double FamilyDiscount::applyDiscount(double total, int numPizza) const {
	// Apply family discount if the number of pizzas is greater than 2? Or how else do we do it
	if (numPizza > 2) {
		return total * (1.0 - discountRate);
	}
	return total; // No discount applied if the number of pizzas is 2 or less
}
