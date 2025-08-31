#ifndef __Pizza_h__
#define __Pizza_h__
#include <string>
using namespace std;
#include <iostream>

class Pizza {
public:
	Pizza();
	virtual ~Pizza();
	virtual double getPrice() const = 0;

	virtual string getName() const = 0;

	void printPizza() const;
	virtual string toString() const;
	virtual Pizza* clone() const = 0;
};

#endif
