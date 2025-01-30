#pragma once
#include "Address.h"
class Student
{
private:
	string name;
	Address studentAddress; // address is part of the student class 

public:
	void setName(string n);
	string getName();

	void setStudentAddress(Address add);
	Address getStudentAddress();



};

