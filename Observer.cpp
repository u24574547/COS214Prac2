#include "Observer.h"

Observer::Observer(Menus *menu) {
    _unnamed_Menus_ = menu;
}

Observer::~Observer() {
    delete _unnamed_Menus_;
}
