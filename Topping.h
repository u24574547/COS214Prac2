#ifndef __Topping_h__
#define __Topping_h__
#include "PizzaComponent.h"

// I dont think this class needs to implement the cline function right?
class Topping: public PizzaComponent
{
    public:
        Topping(double price, string name);
        ~Topping() override;
        virtual string getName() const override;
        virtual double getPrice() const override;
        
        virtual PizzaComponent* clone() const override;
};

#endif
