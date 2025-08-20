#include <exception>
using namespace std;

#ifndef __Menus_h__
#define __Menus_h__

// #include "Observer.h"
#include "Pizza.h"

class Observer;
class Pizza;
class Menus;

__abstract class Menus
{
	private: Observer* _observers;
	private: Pizza* _pizzas;
	public: Observer* _unnamed_Observer_;
	public: Pizza* _unnamed_Pizza_;

	public: void addObserver(Observer* aObserver);

	public: void removeObserver(Observer* aObserver);

	public: void addPizza(Pizza aPizza);

	public: void removePizza(Pizza aPizza);

	public: virtual void notifyObservers(String aMessage) = 0;

	public: Pizza* getCustomPizza(String aPizzaName);
};

#endif
