#include "Menus.h"

Menus::Menus() {
	_observers = vector<Observer *>();
	_pizzas = vector<Pizza *>();
}

Menus::~Menus() {
	for (int i = 0; i < _observers.size(); i++) {
		delete _observers[i];
	}
	_observers.clear();

	for (int i = 0; i < _pizzas.size(); i++) {
		delete _pizzas[i];
	}
	_pizzas.clear();
}

void Menus::addObserver(Observer* anObserver) {
	_observers.push_back(anObserver);
}

void Menus::removeObserver(Observer* anObserver) {
	vector<Observer*>::iterator it;
	for (it = _observers.begin(); it != _observers.end(); ++it) {
		if (*it==anObserver) {
			delete anObserver;
			anObserver = nullptr;
			_observers.erase(it);
			break;
		}
	}
}

void Menus::addPizza(Pizza* aPizza) {
	_pizzas.push_back(aPizza);
	notifyObservers("Added a new pizza.");
}

void Menus::removePizza(Pizza* aPizza) {
	vector<Pizza*>::iterator it;
	for (it = _pizzas.begin(); it != _pizzas.end(); ++it) {
		if (*it==aPizza) {
			delete aPizza;
			aPizza = nullptr;
			_pizzas.erase(it);
			break;
		}
	}
	notifyObservers("Removed a new pizza.");
}

