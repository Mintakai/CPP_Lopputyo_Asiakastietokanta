#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>

class Client
{
public:
	Client();
	Client(std::string na, std::string em, std::string te, std::string st, std::string zi, std::string to);
	void GetCustomerName();
	void PrintClient();

private:
	std::string name;
	std::string email;
	std::string tel;
	std::string street;
	std::string zip;
	std::string town;
	std::string creationDate;
};

#endif // CLIENT_H