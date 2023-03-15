#pragma once

#include <iostream>
#include <string>

namespace FSN {
	class User {
	protected:
		std::string name;
		std::string surname;
		int age;
		std::string login;
		std::string password;
	public:
		virtual void say(std::string) = 0;
	};
}
