#include "Order.h"

#include "BulkDiscount.h"
#include "FamilyDiscount.h"
#include "RegularPrice.h"

Order::Order(int discountStrategy) {
	_pizzas = vector<Pizza*>();
	setDiscountStrategy(discountStrategy);
}

Order::~Order() {
	for (int i = 0; i < _pizzas.size(); i++) {
		delete _pizzas[i];
	}
	_pizzas.clear();
}

void Order::addPizza(Pizza* aPizza) {
	//make a clone.
	throw "Not yet implemented";
}

void Order::removePizza(int aPizzaNo) {
	Pizza* aPizza = _pizzas[aPizzaNo];
	vector<Pizza*>::iterator it;
	for (it = _pizzas.begin(); it != _pizzas.end(); ++it) {
		if (*it==aPizza) {
			delete aPizza;
			aPizza = nullptr;
			_pizzas.erase(it);
			break;
		}
	}
}

string Order::toString() {
	throw "Not yet implemented";
}

void Order::setDiscountStrategy(int aDiscount) {
	switch (aDiscount) {
		case 1:
			_discount=new FamilyDiscount();
			break;
		case 2:
			_discount=new BulkDiscount(0.05, 8);
			break;
		default:
			_discount=new RegularPrice();
	}
}

