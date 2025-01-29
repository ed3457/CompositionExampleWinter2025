#pragma once
#include <string>
#include <iostream>
using namespace std; 
class Address
{
private:
	string streetName;
	string zipCode;
	string streetNo;
	string city; 

public:

	void setStreetName(string sn);
	string getStreetName();

	void setStreetNo(string sno);
	string getStreetNo();

	void setZipCode(string zc);
	string getZipCode();

	void setCity(string c);
	string getCity();

	Address();
	Address(string sn, string zc, string sno, string c);

	void printAddress();

};

