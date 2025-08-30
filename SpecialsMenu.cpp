#include "SpecialsMenu.h"

void SpecialsMenu::notifyObservers(string aMessage) {
	vector<Observer*>::iterator it;
	for (it = _observers.begin(); it != _observers.end(); ++it) {
		(*it.base())->update("SpecialsMenu says "+aMessage);
	}
}

