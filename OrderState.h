#ifndef __OrderState_h__
#define __OrderState_h__

#include <string>
#include "Pizza.h"
class Order;

class OrderState {
public:
    virtual ~OrderState() {}
    virtual void addPizza(Order* order, Pizza* pizza) = 0;
    virtual void removePizza(Order* order, int pizzaNo) = 0;
    virtual void applyDiscount(Order* order, int discountType) = 0;
    virtual std::string getStateName() const = 0;
};

#endif