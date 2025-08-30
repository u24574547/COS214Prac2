#include "Customer.h"

Customer::Customer(Menus *menu): Observer(menu) {
}

void Customer::update(string aMessage) {
	cout<<"Customer received the following message: "<<aMessage<<endl;
}

