#ifndef __Menus_h__
#define __Menus_h__
#include <vector>

#include "Observer.h"
#include "Pizza.h"

class Menus {
protected:
	vector<Observer*> _observers;
	vector<Pizza*> _pizzas;

public:
	Menus();
	virtual ~Menus();

	void addObserver(Observer *anObserver);

	void removeObserver(Observer *anObserver);

	void addPizza(Pizza *aPizza);

	void removePizza(Pizza *aPizza);

	virtual void notifyObservers(string aMessage) = 0;

	virtual string toString() = 0;
};

#endif
