#ifndef __AddingPizza_h__
#define __AddingPizza_h__

#include "OrderState.h"
#include "Pizza.h"

class AddingPizza : public OrderState {
public:
    void addPizza(Order* order, Pizza* pizza) override;
    void removePizza(Order* order, int pizzaNo) override;
    void applyDiscount(Order* order, int discountType) override;
    std::string getStateName() const override { return "AddingPizzas"; }
};

#endif