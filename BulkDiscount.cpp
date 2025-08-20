#include <exception>
using namespace std;

#include "BulkDiscount.h"
#include "DiscountStrategy.h"
// We create different dicounts for different threshholds of pizzas?
BulkDiscount::BulkDiscount(double rate, int required){
	discountRate = rate;
	requiredPizzas = required;
}
double BulkDiscount::applyDiscount(double total, int numPizza) const {
	if (numPizza >= requiredPizzas) {
		return total * (1.0 - discountRate);
	}
	return total; // No discount applied if the number of pizzas is less than required
}
// I'm thinking we have an array of these and when the customer ends their session we return the highest offered discount from the array?
// In the prac we are supposed to hard code it but i Dont know if you want to do this