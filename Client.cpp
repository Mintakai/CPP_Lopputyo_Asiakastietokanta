#include "Client.h"

Client::Client()
{

}

Client::Client(std::string na, std::string em, std::string te, std::string st, std::string zi, std::string to)
{
	this->name = na;
	this->email = em;
	this->tel = te;
	this->street = st;
	this->zip = zi;
	this->town = to;
}

std::string Client::GetCustomerName()
{
	return name;
}

void Client::PrintClient()
{
	std::cout << "Customer data for: " << name << std::endl
		<< std::endl
		<< "Name: \t\t" << name << std::endl
		<< "Email: \t\t" << email << std::endl
		<< "Telephone: \t" << tel << std::endl
		<< "Street: \t" << street << std::endl
		<< "ZIP Code: \t" << zip << std::endl
		<< "Town: \t\t" << town << std::endl;
}
