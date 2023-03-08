#ifndef LAWYER_H
#define LAWYER_H

#include <iostream>
#include "Employee.h"

using namespace std;

// inherits from Employee
class Lawyer : public Employee {
	private:
		int stockOptions;
	public:
		Lawyer(string, int);
		int getStockOptions() const;
		void setStockOptions(int);
		string toStringStaticBind() const;
		string toStringDynamicBind() const;
};

#endif
