#include "Order.h"

#include "BulkDiscount.h"
#include "FamilyDiscount.h"
#include "RegularPrice.h"

Order::Order(int discountStrategy) {
	_pizzas = vector<Pizza*>();
	switch (discountStrategy) {
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

Order::~Order() {
	for (int i = 0; i < _pizzas.size(); i++) {
		delete _pizzas[i];
	}
	_pizzas.clear();
}

void Order::addPizza(Pizza* aPizza) {
	//make a clone.
	_pizzas.push_back(aPizza->clone());
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
	string ans = "Pizzas: \n";
	double totalPrice = 0.0;
	vector<Pizza *>::iterator it;
	for (it = _pizzas.begin(); it != _pizzas.end(); ++it) {
		ans+=(*it.base())->toString()+"\n";
		totalPrice+=(*it.base())->getPrice();
	}

	//ans+="Price before discount: "+to_string(totalPrice)+"\n";
	ans+="Discount Strategy:" + _discount->getType()+"\n";
	ans+="Total Price: "+to_string(_discount->applyDiscount(totalPrice, _pizzas.size()))+"\n";
	return ans;
}

void Order::setDiscountStrategy(int aDiscount) {
	if (_discount!=nullptr) delete _discount;
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

