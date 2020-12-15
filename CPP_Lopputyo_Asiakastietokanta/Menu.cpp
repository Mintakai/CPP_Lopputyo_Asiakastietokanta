#include "Menu.h"
#include "ClientEditor.h"

Menu::Menu()
{

}

Menu::Menu(std::string firstO, std::string secondO, std::string thirdO, std::string fourthO, std::string fifthO)
{
	this->firstOption = firstO;
	this->secondOption = secondO;
	this->thirdOption = thirdO;
	this->fourthOption = fourthO;
	this->fifthOption = fifthO;
}

void Menu::SetIntro()
{
	this->introText = "Welcome to ProgramX! Choose an option and press ENTER to continue";
}

void Menu::CreateMenu()
{
	std::system("cls");
	std::cout << introText << std::endl
		<< std::endl;

	if (fifthOption == "")
	{
		std::cout << firstOption << std::endl
			<< secondOption << std::endl
			<< thirdOption << std::endl
			<< fourthOption << std::endl
			<< std::endl << ": ";
	}
	else if (fourthOption == "")
	{
		std::cout << firstOption << std::endl
			<< secondOption << std::endl
			<< thirdOption << std::endl
			<< std::endl << ": ";
	}
	else if (thirdOption == "")
	{
		std::cout << firstOption << std::endl
			<< secondOption << std::endl
			<< std::endl << ": ";
	}
	else if (secondOption == "")
	{
		std::cout << firstOption << std::endl
			<< std::endl << ": ";
	}
	else if (firstOption == "")
	{
		std::cout << "Menu is empty";
	}
	else
	{
		std::cout << firstOption << std::endl
			<< secondOption << std::endl
			<< thirdOption << std::endl
			<< fourthOption << std::endl
			<< fifthOption << std::endl
			<< std::endl << ": ";
	}
}

int Menu::GetInput()
{
	int choice;
	std::cin >> choice;
	return choice;
}

void Menu::MenuNavigation()
{
	std::string throwAwayClient = "";
	int choice(0);
	do
	{
		CreateMenu();
		choice = GetInput();
		ClientEditor ce;
		switch (choice)
		{
		case 1:
			ce.CreateClient();
			std::system("PAUSE");
			break;
		case 2:
			ce.ReadClient();
			std::system("PAUSE");
			break;
		case 3:
			ce.DeleteClient(throwAwayClient, false);
			std::system("PAUSE");
			break;
		case 4:
			ce.ListClients();
			std::system("PAUSE");
			break;
		case 5:
			std::cout << "5";
			break;
		default:
			break;
		}
	} while (choice != 5);
}