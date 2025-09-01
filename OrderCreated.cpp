#include "OrderCreated.h"
#include "Order.h"
#include "AddingPizza.h"

void OrderCreated::addPizza(Order* order, Pizza* pizza) {
    order->getPizzas().push_back(pizza->clone());
    order->setState(new AddingPizza());
}

void OrderCreated::removePizza(Order* order, int pizzaNo) {
    // No pizzas to remove yet
}

void OrderCreated::applyDiscount(Order* order, int discountType) {
    // Can't apply discount before adding pizzas
}