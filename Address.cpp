#include "Address.h"

void Address::setStreetName(string streetName)
{
	this->streetName = streetName;
}

string Address::getStreetName()
{
	return streetName;
}

void Address::setStreetNo(string sno)
{
	streetNo = sno;
}

string Address::getStreetNo()
{
	return streetNo;
}

void Address::setZipCode(string zc)
{
	zipCode = zc;
}

string Address::getZipCode()
{
	return zipCode;
}

void Address::setCity(string c)
{
	city = c;
}

string Address::getCity()
{
	return city;
}

Address::Address():Address("Not assigned yet", "Not assigned yet", "Not assigned yet", "Not assigned yet")
{
	/*setCity("Not assigned yet");
	setZipCode("Not assigned yet");
	setStreetName("Not assigned yet");
	setStreetNo("Not assigned yet");*/
}

Address::Address(string sn, string zc, string sno, string c)
{

	setCity(c);
	setZipCode(zc);
	setStreetName(sn);
	setStreetNo(sno);
}

void Address::printAddress()
{
	cout << getStreetName() << endl;
	cout << getStreetNo() << endl;
	cout << getCity() << endl;
	cout << getZipCode() << endl;
}
