
#include "Topping.h"
#include "PizzaComponent.h"

Topping::Topping(double price, string name) {
    this->price = price;
    this->name = name;
}
Topping::~Topping() {
    // Destructor logic if needed
}
string Topping::getName() const {
    return name;
}
double Topping::getPrice() const {
    return price;
}