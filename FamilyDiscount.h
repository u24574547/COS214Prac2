#ifndef __FamilyDiscount_h__
#define __FamilyDiscount_h__

#include "DiscountStrategy.h"

class FamilyDiscount : public DiscountStrategy {
private:
	double discountRate;
	//bool semenSampled;

public:
	FamilyDiscount(double discount = 0.15);

	virtual ~FamilyDiscount() {
	}

	std::string getType();

	virtual double applyDiscount(double total, int numPizza) const override;
};
#endif
