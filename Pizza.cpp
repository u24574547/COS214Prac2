#include "Pizza.h"

Pizza::Pizza() {
}

Pizza::~Pizza() {
}

string Pizza::toString() const {
	int rounded = static_cast<int>(getPrice() * 100);
	int lower = rounded%100;
	rounded = rounded/100;
	return getName() + "\t R " + std::to_string(rounded)+"."+((lower==0)?"00":std::to_string(lower));
}

void Pizza::printPizza() const{
	cout << getName() << " costs R " << getPrice() << endl;
}

