#pragma once
#include <iostream>
#include "MenuItem.h"

namespace FSN {
	class MyMenu {
	public:
		MyMenu(char*, MenuItem*, int);
		~MyMenu();
		void Print();
		int getSelect() const;
		bool isRun() const;
		int getCount() const;
		char* getTitle();
		MenuItem* getItems();
		void printMenu();
		int runMenu();
	private:
		char* menuName = new char[20];
		int countItems;
		int selectedItem{-1};
		bool isRunning;
		MenuItem* menuItems;
	};
}