#include "Pizza.h"

Pizza::Pizza() {
}

Pizza::~Pizza() {
}

void Pizza::printPizza() const{
	cout << getName() << " costs R " << getPrice() << endl;
}

