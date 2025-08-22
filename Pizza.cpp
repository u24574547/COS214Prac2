#include <iostream>
#include "Pizza.h"



void Pizza::printPizza() const{
	cout << getName() << " costs R " << getPrice() << endl;
}

