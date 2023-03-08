#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include <iostream>
#include "Employee.h"

using namespace std;

// inherits from Employee
class Programmer : public Employee {
	private:
		bool busPass;
	public:
		Programmer(string, bool);
		bool getBusPass() const;
		void setBusPass(bool);
		string toStringStaticBind() const;
		string toStringDynamicBind() const;
};

#endif
