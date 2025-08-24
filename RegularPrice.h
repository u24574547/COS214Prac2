#ifndef RegularPrice_h
#define RegularPrice_h

#include "DiscountStrategy.h"

class RegularPrice : public DiscountStrategy {
public:
	virtual double applyDiscount(double total, int numPizza) const override;
};

#endif
