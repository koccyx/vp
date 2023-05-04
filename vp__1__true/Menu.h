#pragma once
#include <iostream>
#include "MenuItem.h"

namespace FSN {
	class MyMenu {
	public:
		MyMenu(string, MenuItem*, int);
		~MyMenu();
		void Print();
		int getSelect() const;
		bool isRun() const;
		int getCount() const;
		string getTitle();
		MenuItem* getItems();
		void printMenu();
		int runMenu();
	private:
		string menuName;
		int countItems;
		int selectedItem{-1};
		bool isRunning;
		MenuItem* menuItems;
	};
}