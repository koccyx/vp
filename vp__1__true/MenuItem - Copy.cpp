#include "MenuItem.h"
#include <iostream>
#include <iomanip>


namespace FSN {
	MenuItem::MenuItem(char* name, Function f) : itemName(name), func(f) {};
	
	MenuItem::~MenuItem() {
		//delete itemName;
	}
	
	void MenuItem::setItemName(char* name) {
		itemName = name;
	}

	char* MenuItem::getItemName() {
		return itemName;
	}

	int MenuItem::run() {
		return func();
	}
	
	void MenuItem::Print() {
		std::cout << "Function " << itemName << "\n";
	}

}