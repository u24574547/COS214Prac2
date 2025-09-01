#include "DiscountApplied.h"
#include "Order.h"
#include "OrderFinalised.h"

void DiscountApplied::addPizza(Order* order, Pizza* pizza) {
    // Can't add pizza after discount applied
}

void DiscountApplied::removePizza(Order* order, int pizzaNo) {
    // Can't remove pizza after discount applied
}

void DiscountApplied::applyDiscount(Order* order, int discountType) {
    // Already applied, can finalize
    order->setState(new OrderFinalised());
}