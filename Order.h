#ifndef __Order_h__
#define __Order_h__

#include "Pizza.h"
#include "DiscountStrategy.h"
using namespace std;
#include <vector>
class OrderState;
class Order {
private:
	vector<Pizza *> _pizzas;
	DiscountStrategy *_discount;
	OrderState* state;

public:
	Order(int discountStrategy=0);
	virtual ~Order();
	void addPizza(Pizza *aPizza);

	void removePizza(int aPizzaNo);

	string toString() const;

	void setDiscountStrategy(int aDiscount);

	// State pattern methods
    void setState(OrderState* newState);
    string getStateName() const;

    // For state classes to access
    std::vector<Pizza*>& getPizzas() { return _pizzas; }
    DiscountStrategy*& getDiscount() { return _discount; }
};

#endif
