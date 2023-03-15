#pragma once
#include <iostream>
#include "client.h"

namespace FSN {
	class MenuItem {
	public:
		typedef int (*Function)();
		Function func;
		char* itemName = new char[20];
		MenuItem(char*, Function);
		~MenuItem();
		void setItemName(char*);
		char* getItemName();
		void Print();
		int run();
	};
}