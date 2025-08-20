#include <exception>
using namespace std;

#include "RegularPrice.h"
#include "DiscountStrategy.h"

double RegularPrice::applyDiscount(double total, int numPizza) const {
	// No discount applied
	return total;
}

