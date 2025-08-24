#ifndef __BulkDiscount_h__
#define __BulkDiscount_h__
using namespace std;
#include "DiscountStrategy.h"


class BulkDiscount: public DiscountStrategy
{
	private:
		double discountRate;
		int requiredPizzas;
	public: 
		BulkDiscount(double rate, int required);
		virtual ~BulkDiscount() {}
		virtual double applyDiscount(double total, int numPizza) const override;
};

#endif
