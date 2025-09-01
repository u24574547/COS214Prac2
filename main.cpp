
#include <iostream>
#include "BasePizza.h"
#include "ExtraCheese.h"
#include "Pizza.h"
#include "PizzaDecorator.h"
#include "ToppingGroup.h"
#include "Topping.h"
#include "PizzaMenu.h"
#include "SpecialsMenu.h"
#include "StuffedCrust.h"
#include "Customer.h"
#include "Website.h"
#include "Order.h"
using namespace std;

void checkPizza(string name, double price, PizzaComponent* toppings, string expectedToppings, Pizza* pizza) {
    if (pizza->getPrice()!=price) {
        cout << "Pizza price wrong" << endl;
    }
    if (!expectedToppings.empty()) {
        if (pizza->getName()!=name + " with "+expectedToppings) {
            cout << "Toppings or name wrong" << endl;
        }
    }
    else {
        if (pizza->getName()!=name) {
            cout << "Toppings or name wrong" << endl;
        }
    }
    int rounded = static_cast<int>(price * 100);
    int lower = rounded%100;
    rounded = rounded/100;
    string expectedOutput = name;
    if (!expectedToppings.empty()) {
        expectedOutput+=" with " + expectedToppings;
    }
    expectedOutput+="\t R "+std::to_string(rounded)+"."+((lower==0)?"00":std::to_string(lower));

    if (expectedOutput != pizza->toString()) {
        cerr << "Menu listing from toString wrong." << endl;
        cerr << "Expected: " << expectedOutput << endl;
        cerr << "Actual: " << pizza->toString() << endl;
    }

    delete pizza->clone();
}

void pizzaTest() {
    string pizzaName = "Margherita";
    Pizza* pizza = new BasePizza(pizzaName, nullptr);
    checkPizza(pizzaName, 30.0, nullptr, "", pizza);
    pizza->printPizza();

    delete pizza;
}

void toppingTest() {
    string pizzaName = "Regina";
    ToppingGroup* pComp = new ToppingGroup("Classic toppings");
    pComp->add(new Topping(10.0, "Mushroom"));
    pComp->add(new Topping(15.0, "Ham"));
    Pizza* pizza = new BasePizza(pizzaName, pComp);

    checkPizza(pizzaName, 55.0, pComp, "Classic toppings (Mushroom, Ham)", pizza);

    // cout << pizza->getName() << endl;
    // cout << pizza->getPrice() << endl;
    // cout << pizza->toString() << endl;
    // pizza->printPizza();
    delete pizza;
}

void menuTest() {
    //only tests pizzas', not observers' functionality
    Pizza* margerhita = new BasePizza("Margerhita", nullptr);
    ToppingGroup* pComp = new ToppingGroup("Classic toppings");
    pComp->add(new Topping(10.0, "Mushroom"));
    pComp->add(new Topping(15.0, "Ham"));
    Pizza* regina = new BasePizza("Regina", pComp);

    Menus* menu = new PizzaMenu();
    menu->addPizza(margerhita);
    menu->addPizza(regina);
    cout<< menu->toString() << endl;
    menu->removePizza(margerhita);
    cout<< menu->toString() +"\n"<< endl;
    delete menu;

    margerhita = new BasePizza("Margerhita", nullptr);
    pComp = new ToppingGroup("Classic toppings");
    pComp->add(new Topping(10.0, "Mushroom"));
    pComp->add(new Topping(15.0, "Ham"));
    regina = new BasePizza("Regina", pComp);

    menu = new SpecialsMenu();
    menu->addPizza(margerhita);
    menu->addPizza(regina);
    cout<< menu->toString() << endl;
    menu->removePizza(margerhita);
    cout<< menu->toString() << endl;
    delete menu;
}

void decoratorTest() {
    string pizzaName = "Margherita";
    Pizza* pizza = new BasePizza(pizzaName, nullptr);
    PizzaDecorator* pizzaDec = new ExtraCheese(pizza);
    checkPizza(pizzaName, 42.0, nullptr, "Extra Cheese", pizzaDec);

    PizzaDecorator* pizzaDec2 = new StuffedCrust(pizzaDec);
    checkPizza(pizzaName, 62.0, nullptr, "Extra Cheese with Stuffed Crust", pizzaDec2);
    pizza->printPizza();

    delete pizza;
}

void observerTest() {
    Pizza* margerhita = new BasePizza("Margerhita", nullptr);
    ToppingGroup* pComp = new ToppingGroup("Classic toppings");
    pComp->add(new Topping(10.0, "Mushroom"));
    pComp->add(new Topping(15.0, "Ham"));
    Pizza* regina = new BasePizza("Regina", pComp);

    Menus* menu = new PizzaMenu();
    Observer* customer = new Customer(menu);
    menu->addObserver(customer);
    Observer* website = new Website(menu);
    menu->addObserver(website);

    menu->addPizza(margerhita);
    menu->addPizza(regina);
    cout<< menu->toString() << endl;
    menu->removePizza(margerhita);
    cout<< menu->toString() +"\n"<< endl;
    delete menu;

    margerhita = new BasePizza("Margerhita", nullptr);
    pComp = new ToppingGroup("Classic toppings");
    pComp->add(new Topping(10.0, "Mushroom"));
    pComp->add(new Topping(15.0, "Ham"));
    regina = new BasePizza("Regina", pComp);

    menu = new SpecialsMenu();
    customer = new Customer(menu);
    menu->addObserver(customer);
    website = new Website(menu);
    menu->addObserver(website);
    menu->addPizza(margerhita);
    menu->addPizza(regina);
    cout<< menu->toString() << endl;
    menu->removePizza(margerhita);
    cout<< menu->toString() << endl;
    delete menu;
}

void orderDiscountTest() {
    Order order = Order(1);
    Pizza* margerhita = new BasePizza("Margerhita", nullptr);
    ToppingGroup* pComp = new ToppingGroup("Classic toppings");
    pComp->add(new Topping(10.0, "Mushroom"));
    pComp->add(new Topping(15.0, "Ham"));
    Pizza* regina = new BasePizza("Regina", pComp);
    order.addPizza(margerhita);
    order.addPizza(regina);
    cout<< order.toString() << endl;
    order.removePizza(0);
    cout<< order.toString() << endl;

    order.setDiscountStrategy(1);
    order.setDiscountStrategy(2);
}

void orderStateTest() {
    Order order;
    cout << "Initial state: " << order.getStateName() << endl;

    // Add first pizza (should transition to AddingPizzas)
    Pizza* margherita = new BasePizza("Margherita", nullptr);
    order.addPizza(margherita);
    cout << "After adding Margherita: " << order.getStateName() << endl;
    cout << order.toString() << endl;

    // Add second pizza
    ToppingGroup* reginaToppings = new ToppingGroup("Regina toppings");
    reginaToppings->add(new Topping(10.0, "Mushroom"));
    reginaToppings->add(new Topping(15.0, "Ham"));
    Pizza* regina = new BasePizza("Regina", reginaToppings);
    order.addPizza(regina);
    cout << "After adding Regina: " << order.getStateName() << endl;
    cout << order.toString() << endl;

    // Remove first pizza
    order.removePizza(0);
    cout << "After removing first pizza: " << order.getStateName() << endl;
    cout << order.toString() << endl;

    // Apply discount (should transition to DiscountApplied)
    order.setDiscountStrategy(1);
    cout << "After applying FamilyDiscount: " << order.getStateName() << endl;
    cout << order.toString() << endl;

    // Try to add pizza after discount applied (should do nothing)
    order.addPizza(new BasePizza("Hawaiian", nullptr));
    cout << "After trying to add pizza in DiscountApplied: " << order.getStateName() << endl;
    cout << order.toString() << endl;

    // Try to remove pizza after discount applied (should do nothing)
    order.removePizza(0);
    cout << "After trying to remove pizza in DiscountApplied: " << order.getStateName() << endl;
    cout << order.toString() << endl;

    // Finalize order (should transition to OrderFinalized)
    order.setDiscountStrategy(0);
    cout << "After finalizing order: " << order.getStateName() << endl;
    cout << order.toString() << endl;

    // Try to add/remove pizza after finalised (should do nothing)
    order.addPizza(new BasePizza("Test", nullptr));
    order.removePizza(0);
    cout << "After trying to add/remove pizza in OrderFinalized: " << order.getStateName() << endl;
    cout << order.toString() << endl;
}

int main() {
    
    pizzaTest();
    toppingTest();
    decoratorTest();
    menuTest();
    observerTest();
    orderDiscountTest();
    orderStateTest();
    return 0;
}
