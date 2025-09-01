// #include <iostream>
// #include "BasePizza.h"
// #include "ToppingGroup.h"
// #include "Topping.h"
// #include "PizzaMenu.h"
// #include "SpecialsMenu.h"
// #include "StuffedCrust.h"
// #include "ExtraCheese.h"
// #include "Customer.h"
// #include "Website.h"
// #include "Order.h"

// using namespace std;

// void printOrderState(const Order& order, const string& action) {
//     cout << "\n[Order State after " << action << "]: " << order.getStateName() << endl;
//     cout << order.toString() << endl;
// }

// int main() {
//     cout << "Demo: Pizza Ordering System " << endl;
//     cout << "_______________________________" << endl;

//     // 1. Create pizzas
//     Pizza* margherita = new BasePizza("Margherita", nullptr);
//     cout << "Created pizza: " << margherita->toString() << endl;

//     ToppingGroup* pepperoniToppings = new ToppingGroup("Pepperoni toppings");
//     pepperoniToppings->add(new Topping(20.0, "Pepperoni"));

//     ToppingGroup* reginaToppings = new ToppingGroup("Regina toppings");
//     reginaToppings->add(new Topping(10.0, "Mushroom"));
//     reginaToppings->add(new Topping(15.0, "Ham"));

//     Pizza* regina = new BasePizza("Regina", reginaToppings);
//     cout << "Created pizza: " << regina->toString() << endl;

//     // 2. Decorate pizza
//     Pizza* cheesyRegina = new ExtraCheese(regina);
//     cout << "Added Extra Cheese: " << cheesyRegina->toString() << endl;

//     Pizza* stuffedCheesyRegina = new StuffedCrust(cheesyRegina);
//     cout << "Added Stuffed Crust: " << stuffedCheesyRegina->toString() << endl;

//     // 3. Add pizzas to menu
//     Menus* pizzaMenu = new PizzaMenu();
//     pizzaMenu->addPizza(margherita);
//     pizzaMenu->addPizza(stuffedCheesyRegina);
//     cout << "\nPizza Menu after adding pizzas:\n" << pizzaMenu->toString() << endl;

//     // 4. Add observers
//     Observer* customer = new Customer(pizzaMenu);
//     Observer* website = new Website(pizzaMenu);
//     pizzaMenu->addObserver(customer);
//     pizzaMenu->addObserver(website);

//     // 5. Remove a pizza and show observer notifications
//     pizzaMenu->removePizza(margherita);
//     cout << "\nPizza Menu after removing Margherita:\n" << pizzaMenu->toString() << endl;

//     // 6. Add pizzas to specials menu
//     Menus* specialsMenu = new SpecialsMenu();
//     specialsMenu->addPizza(new BasePizza("Hawaiian", nullptr));
//     specialsMenu->addPizza(new BasePizza("Pepperoni", pepperoniToppings));
//     cout << "\nSpecials Menu:\n" << specialsMenu->toString() << endl;

//     // 7. Place an order and show state transitions
//     Order order;
//     cout << "\nInitial Order State: " << order.getStateName() << endl;

//     order.addPizza(new BasePizza("Margherita", nullptr));
//     printOrderState(order, "adding Margherita");

//     order.addPizza(regina);
//     printOrderState(order, "adding Regina");

//     // 8. Apply discount strategies and show state transitions
//     order.setDiscountStrategy(1); // FamilyDiscount
//     printOrderState(order, "applying FamilyDiscount");

//     // Try to add pizza after discount applied (should not work)
//     order.addPizza(new BasePizza("Hawaiian", nullptr));
//     printOrderState(order, "trying to add Hawaiian after discount");

//     // Try to remove pizza after discount applied (should not work)
//     order.removePizza(0);
//     printOrderState(order, "trying to remove pizza after discount");

//     // Finalize order (by applying discount again, as per your DiscountApplied state logic)
//     order.setDiscountStrategy(0);
//     printOrderState(order, "finalizing order");

//     // Try to add or remove pizza after order finalized (should not work)
//     order.addPizza(new BasePizza("Test", nullptr));
//     printOrderState(order, "trying to add pizza after finalized");

//     order.removePizza(0);
//     printOrderState(order, "trying to remove pizza after finalized");

//     // Clean up
//     delete pizzaMenu;
//     delete specialsMenu;

//     cout << "\nDemo Complete" << endl;
//     return 0;
// }