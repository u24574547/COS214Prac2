#include <exception>
#include <vector>
using namespace std;

#ifndef __Order_h__
#define __Order_h__

// #include "Pizza.h"
#include "DiscountStrategy.h"

class Pizza;
class DiscountStrategy;
class Order;

class Order
{
	private: vector<Pizza*> _pizzas;
	private: DiscountStrategy _discount;

	public: void addPizza(Pizza* aPizza);

	public: void removePizza(int aPizzaNo);

	public: String toString();

	public: void setDiscountStrategy(int aDiscount);
};

#endif
