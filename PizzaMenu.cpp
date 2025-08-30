#include "PizzaMenu.h"

PizzaMenu::PizzaMenu() {
}

PizzaMenu::~PizzaMenu() {
}

void PizzaMenu::notifyObservers(string aMessage) {
	vector<Observer*>::iterator it;
	for (it = _observers.begin(); it != _observers.end(); ++it) {
		(*it.base())->update("PizzaMenu says "+aMessage);
	}
}

