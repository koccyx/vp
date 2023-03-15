#include <iostream>
#include "Menu.h"

namespace FSN {
	MyMenu::MyMenu(char* name, MenuItem* items, int size) : menuName(name), menuItems(items), countItems(size) {};

	MyMenu::~MyMenu() {
		//delete menuName;
	}

	int MyMenu::getSelect() const{
		return selectedItem;
	}

	int MyMenu::getCount() const {
		return countItems;
	}

	bool MyMenu::isRun() const {
		return isRunning;
	}

	char* MyMenu::getTitle() {
		return menuName;
	}

	MenuItem* MyMenu::getItems() {
		return menuItems;
	}
	
	void MyMenu::printMenu() {
		for (int i = 0; i < countItems; i++) {
			std::cout << i + 1 << ". ";
			menuItems[i].Print();
			std::cout << '\n';
		}
	}
	int MyMenu::runMenu() {
		printMenu();
		std::cout << "\n select -> ";
		std::cin >> selectedItem;
		std::cout << "\n";
		return menuItems[selectedItem - 1].run();
	}
}