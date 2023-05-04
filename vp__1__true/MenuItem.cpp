#include "MenuItem.h"
#include <iostream>
#include <iomanip>


namespace FSN {
	MenuItem::MenuItem(string name, Function f) : itemName(name), func(f) {};
	
	MenuItem::~MenuItem() {
	}
	
	void MenuItem::setItemName(string name) {
		itemName = name;
	}

	string MenuItem::getItemName() {
		return itemName;
	}

	int MenuItem::run() {
		return func();
	}
	
	void MenuItem::Print() {
		std::cout << "Function " << itemName << "\n";
	}

}