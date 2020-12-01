#ifndef MENU_H
#define MENU_H

#include <iostream>

class Menu
{
public:
	Menu();
	Menu(std::string firstO, std::string secondO, std::string thirdO, std::string fourthO, std::string fifthO);
	void SetIntro();
	void CreateMenu();
	int GetInput();
	void MenuNavigation();
private:
	std::string introText;
	std::string firstOption;
	std::string secondOption;
	std::string thirdOption;
	std::string fourthOption;
	std::string fifthOption;
};

#endif // MENU_H