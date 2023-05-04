#pragma once
#include <iostream>
#include "client.h"

namespace FSN {
	class MenuItem {
	public:
		typedef int (*Function)();
		Function func;
		string itemName;
		MenuItem(string, Function);
		~MenuItem();
		void setItemName(string);
		string getItemName();
		void Print();
		int run();
	};
}