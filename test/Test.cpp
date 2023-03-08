// NOTE: do not modify the contents of this file
#include "gtest/gtest.h"
#include "Employee.h"
#include "Programmer.h"
#include "Lawyer.h"
#include "Accountant.h"

// NOTE: the order is expected/solution, actual/received student value
TEST(Test1, Employee_gettersAndSetters) {
	Employee e1("emp");
	EXPECT_EQ("emp", e1.getName()); 
	EXPECT_EQ(40000.0, e1.getSalary()); 
	e1.setName("EMP");
	EXPECT_EQ("EMP", e1.getName()); 
	e1.setSalary(50000.0);
	EXPECT_EQ(50000.0, e1.getSalary()); 
}

TEST(Test2, Programmer_gettersAndSetters) {
	Programmer p1("prog", true);
	EXPECT_EQ("prog", p1.getName()); 
	EXPECT_DOUBLE_EQ(60000.0, p1.getSalary());
	EXPECT_EQ(true, p1.getBusPass());
	p1.setName("PROG");
	EXPECT_EQ("PROG", p1.getName()); 
	p1.setSalary(50000.0);
	EXPECT_EQ(50000.0, p1.getSalary()); 
	p1.setBusPass(false);
	EXPECT_EQ(false, p1.getBusPass());
}

TEST(Test3, Lawyer_gettersAndSetters) {
	Lawyer l1("law", 150);
	EXPECT_EQ("law", l1.getName()); 
	EXPECT_DOUBLE_EQ(70000.0, l1.getSalary());
	EXPECT_EQ(150, l1.getStockOptions());
	l1.setStockOptions(7);
	EXPECT_EQ(7, l1.getStockOptions());
}

TEST(Test4, Accountant_gettersAndSetters) {
	Accountant a1("acc", 12.345678);
	EXPECT_EQ("acc", a1.getName()); 
	EXPECT_DOUBLE_EQ(40000.0, a1.getSalary());
	EXPECT_DOUBLE_EQ(12.345678, a1.getParkingAllowance());
	a1.setParkingAllowance(5.0);
	EXPECT_DOUBLE_EQ(5.000000, a1.getParkingAllowance());
}

TEST(Test5, Employee_toString) {
	Employee e1("emp");
	Employee * e1Ptr = &e1;
	EXPECT_EQ("Employee name: emp Salary: $40000.000000", e1Ptr->toStringStaticBind());
	EXPECT_EQ("Employee name: emp Salary: $40000.000000", e1Ptr->toStringDynamicBind());
}

TEST(Test6, Programmer_toString) {
	Programmer p1("prog", true);
	EXPECT_EQ("Employee name: prog Salary: $60000.000000 Employee type: Programmer Bus pass: 1", p1.toStringStaticBind());
	EXPECT_EQ("Employee name: prog Salary: $60000.000000 Employee type: Programmer Bus pass: 1", p1.toStringDynamicBind());
	
	Employee * p1Ptr = &p1;
	EXPECT_EQ("Employee name: prog Salary: $60000.000000", p1Ptr->toStringStaticBind());
	EXPECT_EQ("Employee name: prog Salary: $60000.000000 Employee type: Programmer Bus pass: 1", p1Ptr->toStringDynamicBind());
}

TEST(Test7, Lawyer_toString) {
	Lawyer l1("law", 150);
	EXPECT_EQ("Employee name: law Salary: $70000.000000 Employee type: Lawyer Stock options: 150", l1.toStringStaticBind());
	EXPECT_EQ("Employee name: law Salary: $70000.000000 Employee type: Lawyer Stock options: 150", l1.toStringDynamicBind());
	
	Employee * l1Ptr = &l1;
	EXPECT_EQ("Employee name: law Salary: $70000.000000", l1Ptr->toStringStaticBind());
	EXPECT_EQ("Employee name: law Salary: $70000.000000 Employee type: Lawyer Stock options: 150", l1Ptr->toStringDynamicBind());
}

TEST(Test8, Accountant_toString) {
	Accountant a1("acc", 12.345678);
	EXPECT_EQ("Employee name: acc Salary: $40000.000000 Employee type: Accountant Parking allowance: $12.345678", a1.toStringStaticBind());
	EXPECT_EQ("Employee name: acc Salary: $40000.000000 Employee type: Accountant Parking allowance: $12.345678", a1.toStringDynamicBind());
	
	Employee * a1Ptr = &a1;
	EXPECT_EQ("Employee name: acc Salary: $40000.000000", a1Ptr->toStringStaticBind());
	EXPECT_EQ("Employee name: acc Salary: $40000.000000 Employee type: Accountant Parking allowance: $12.345678", a1Ptr->toStringDynamicBind());
}
