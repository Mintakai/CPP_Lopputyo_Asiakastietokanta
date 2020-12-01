#include <iostream>
#include "Client.h"
#include "Menu.h"


int main()
{
	Menu menu = Menu("1. Add new customer", "2. Modify customer details", "3. Delete customer", "4. Print summary of customers", "5. End");
	Client customer = Client("Aurorae", "info@aurorae.tk", "010 0000 001", "Mannerheimintie", "00100", "Helsinki");

	menu.SetIntro();
	menu.MenuNavigation();

	customer.PrintClient();
}
