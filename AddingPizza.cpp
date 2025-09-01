#include "AddingPizza.h"
#include "Order.h"
#include "DiscountApplied.h"
#include "FamilyDiscount.h"
#include "BulkDiscount.h"
#include "RegularPrice.h"
#include "DiscountStrategy.h"

void AddingPizza::addPizza(Order* order, Pizza* pizza) {
    order->getPizzas().push_back(pizza->clone());
}

void AddingPizza::removePizza(Order* order, int pizzaNo) {
    auto& pizzas = order->getPizzas();
    if (pizzaNo >= 0 && pizzaNo < pizzas.size()) {
        delete pizzas[pizzaNo];
        pizzas.erase(pizzas.begin() + pizzaNo);
    }
}

void AddingPizza::applyDiscount(Order* order, int discountType) {
    if (order->getDiscount()) delete order->getDiscount();
    switch (discountType) {
        case 1:
            order->getDiscount() = new FamilyDiscount();
            break;
        case 2:
            order->getDiscount() = new BulkDiscount(0.05, 8);
            break;
        default:
            order->getDiscount() = new RegularPrice();
    }
    order->setState(new DiscountApplied());
}