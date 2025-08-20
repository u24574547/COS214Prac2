#include <exception>
using namespace std;

#ifndef __FamilyDiscount_h__
#define __FamilyDiscount_h__

#include "DiscountStrategy.h"

// class DiscountStrategy;
class FamilyDiscount;

class FamilyDiscount: public DiscountStrategy
{
	private:
		double discountRate;
		bool semenSampled;

	public: 
		FamilyDiscount(double discount = 0.15);
    virtual ~FamilyDiscount() {}

    virtual double applyDiscount(double total, int numPizza) const override;
};
#endif
