#ifndef __DiscountStrategy_h__
#define __DiscountStrategy_h__

class DiscountStrategy
{

	public: 
		virtual ~DiscountStrategy();
		virtual double applyDiscount(double total, int numPizza) const = 0;
};

#endif
