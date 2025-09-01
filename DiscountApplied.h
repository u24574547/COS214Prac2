#ifndef __DiscountApplied_h__
#define __DiscountApplied_h__

#include "OrderState.h"

class DiscountApplied : public OrderState {
public:
    void addPizza(Order* order, Pizza* pizza) override;
    void removePizza(Order* order, int pizzaNo) override;
    void applyDiscount(Order* order, int discountType) override;
    std::string getStateName() const override { return "DiscountApplied"; }
};

#endif