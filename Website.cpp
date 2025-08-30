#include "Website.h"

Website::Website(Menus *menu): Observer(menu) {
}

void Website::update(string aMessage) {
	cout<<"Website received the following message: "<<aMessage<<endl;
}

