#include "Student.h"

void Student::setName(string n)
{
	name = n;
}

string Student::getName()
{
	return name;
}

void Student::setStudentAddress(Address add)
{
	studentAddress = add;
}

Address Student::getStudentAddress()
{
	return studentAddress;
}
