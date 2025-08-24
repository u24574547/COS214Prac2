#ifndef __Order_h__
#define __Order_h__

#include "Pizza.h"
#include "DiscountStrategy.h"
using namespace std;
#include <vector>

class Order {
private:
	vector<Pizza *> _pizzas;
	DiscountStrategy *_discount;

	void addPizza(Pizza *aPizza);

	void removePizza(int aPizzaNo);

	string toString();

	void setDiscountStrategy(int aDiscount);
};

#endif
