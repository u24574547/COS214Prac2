#include <exception>
using namespace std;
#include <iostream>
#include "Pizza.h"
#include "PizzaDecorator.h"
#include "Menus.h"



void Pizza::printPizza() const{
	cout << getName() << " costs R " << getPrice() << endl;
}

