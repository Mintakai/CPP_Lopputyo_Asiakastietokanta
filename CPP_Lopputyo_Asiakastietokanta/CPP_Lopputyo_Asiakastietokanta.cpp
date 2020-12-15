#include <iostream>
#include "Client.h"
#include "Menu.h"


int main()
{
	Menu menu = Menu("1. Add new customer", "2. Modify customer details", "3. Delete customer", "4. List all customers", "5. End");

	menu.SetIntro();
	menu.MenuNavigation();
}
