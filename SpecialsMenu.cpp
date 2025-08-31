#include "SpecialsMenu.h"

SpecialsMenu::SpecialsMenu() {
}

SpecialsMenu::~SpecialsMenu() {
}

string SpecialsMenu::toString() {
	string ans = "==========Specials Menu==========\n";
	for (int i=0;i<_pizzas.size();++i) {
		ans+=_pizzas[i]->toString();
		if (i!=_pizzas.size()-1) ans+="\n";
	}
	return ans;
}

void SpecialsMenu::notifyObservers(string aMessage) {
	vector<Observer*>::iterator it;
	for (it = _observers.begin(); it != _observers.end(); ++it) {
		(*it.base())->update("SpecialsMenu says "+aMessage);
	}
}

