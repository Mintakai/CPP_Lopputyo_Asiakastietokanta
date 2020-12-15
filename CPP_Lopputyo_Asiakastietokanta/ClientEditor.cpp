#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include "ClientEditor.h"

ClientEditor::ClientEditor() : Client()
{

}

void ClientEditor::CreateClient()
{
	std::string clientName;
	std::string clientEmail;
	std::string clientTel;
	std::string clientStreet;
	std::string clientZip;
	std::string clientTown;

	std::system("cls");
	std::cout << "--Please enter a name for the customer--" << std::endl
		<< std::endl
		<< ": ";
	std::cin >> clientName;
	std::system("cls");
	std::cout << "--Please enter an email for the customer--" << std::endl
		<< std::endl
		<< ": ";
	std::cin >> clientEmail;
	std::system("cls");
	std::cout << "--Please enter a phone number for the customer--" << std::endl
		<< std::endl
		<< ": ";
	std::cin >> clientTel;
	std::system("cls");
	std::cout << "--Please enter a street address for the customer--" << std::endl
		<< std::endl
		<< ": ";
	std::cin >> clientStreet;
	std::system("cls");
	std::cout << "--Please enter a ZIP Code for the customer--" << std::endl
		<< std::endl
		<< ": ";
	std::cin >> clientZip;
	std::system("cls");
	std::cout << "--Please enter a town for the customer--" << std::endl
		<< std::endl
		<< ": ";
	std::cin >> clientTown;
	std::system("cls");

	Client newCustomer = Client(clientName, clientEmail, clientTel, clientStreet, clientZip, clientTown);
	newCustomer.PrintClient();
	std::system("PAUSE");
	SaveClient(newCustomer);
}

void ClientEditor::SaveClient(Client client)
{
	std::string sName = client.GetCustomerName();
	std::string sEmail = client.GetCustomerEmail();
	std::string sTel = client.GetCustomerPhone();
	std::string sStreet = client.GetCustomerStreet();
	std::string sZip = client.GetCustomerZIP();
	std::string sTown = client.GetCustomerTown();

	std::ofstream SaveClient(sName + ".txt");
	SaveClient << sName << std::endl << sEmail << std::endl << sTel << std::endl << sStreet << std::endl << sZip << std::endl << sTown;
	SaveClient.close();

	std::system("cls");
	std::cout << "Customer saved in current working directory as " << sName << ".txt" << std::endl
		<< std::endl;
}

void ClientEditor::ReadClient()
{
	std::string cName;
	std::string cAName;
	std::system("cls");
	std::cout << "Please enter the name of the customer you wish to edit" << std::endl
		<< std::endl
		<< ": ";
	std::cin >> cName;
	cAName = cName;
	cAName += ".txt";

	std::system("cls");
	std::cout << "Customer data for: " << cName << std::endl
		<< std::endl;

	std::string line;
	std::ifstream ClientData(cAName);
	if (ClientData.is_open())
	{
		while (getline(ClientData, line))
		{
			std::cout << line << '\n';
		}
		std::cout << std::endl;
		ClientData.close();
		DeleteClient(cAName, true);
	}
	else
	{
		std::cout << "Could not locate customer with name " + cAName << std::endl
		<< std::endl;
	}
}

void ClientEditor::DeleteClient(std::string& cAName, bool fwhere)
{
	if (fwhere == true)
	{
		if (remove(cAName.c_str()) != 0)
		{
			perror("Could not find the file specified");
		}
		else
		{
			std::cout << ("Customer entry deleted!, please enter new details for the customer!") << std::endl;
			std::system("PAUSE");
			CreateClient();
		}
	}
	else
	{
		std::system("cls");
		std::cout << "Please enter the name of the customer you wish to edit" << std::endl
			<< std::endl
			<< ": ";
		std::cin >> cAName;
		cAName += ".txt";
		if (remove(cAName.c_str()) != 0)
		{
			perror("Could not find the file specified");
		}
		else
		{
			std::cout << ("Customer entry deleted!") << std::endl;
		}
	}

}

void ClientEditor::ListClients()
{
	std::system("cls");
	std::system("dir /B *.txt");
}
