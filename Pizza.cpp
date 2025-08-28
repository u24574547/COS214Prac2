#include "Pizza.h"

Pizza::Pizza() {
}

Pizza::~Pizza() {
}

string Pizza::toString() const {
	return getName() + "\t R " + std::to_string(getPrice());
}

void Pizza::printPizza() const{
	cout << getName() << " costs R " << getPrice() << endl;
}

