#ifndef ACCOUNTANT_H
#define ACCOUNTANT_H

#include <iostream>
#include "Employee.h"

using namespace std;

// inherits from Employee
class Accountant : public Employee {
	private:
		double parkingAllowance;
	public:
		Accountant(string, double);
		double getParkingAllowance() const;
		void setParkingAllowance(double);
		string toStringStaticBind() const;
		string toStringDynamicBind() const;
};

#endif
