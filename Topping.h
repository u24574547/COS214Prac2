#ifndef __Topping_h__
#define __Topping_h__
#include "PizzaComponent.h"
#include <string>
using namespace std;
// class PizzaComponent;
// I just made it simple assuming that we dont hard code the toppings and we create them ourselves
class Topping: public PizzaComponent
{
    public:
        Topping(double price, string name);
        ~Topping() override;
        virtual string getName() const override;
        virtual double getPrice() const override;
};

#endif
