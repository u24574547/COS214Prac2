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

string PizzaMenu::toString() {
	string ans = "==========Pizza Menu==========\n";
	for (int i=0;i<_pizzas.size();++i) {
		ans+=_pizzas[i]->toString();
		if (i!=_pizzas.size()-1) ans+="\n";
	}
	return ans;
}
