#ifndef __DiscountStrategy_h__
#define __DiscountStrategy_h__
#include <string>

class DiscountStrategy
{

	public: 
		virtual ~DiscountStrategy();
		virtual double applyDiscount(double total, int numPizza) const = 0;
		virtual std::string getType()=0;
};

#endif
