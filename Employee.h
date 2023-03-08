#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

using namespace std;

class Employee {
	private:
		string name;
		double salary;
	public:
		Employee(string);
		string getName() const;
		void setName(string);
		double getSalary() const;
		void setSalary(double);
		// TODO: you may need to update one or both of these prototypes
		// note that you can't change the name or return type
		// that will break the tests!!
		string toStringStaticBind() const;
		string toStringDynamicBind() const;
};

#endif
