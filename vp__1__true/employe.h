#pragma once
#include "User.h"


namespace FSN{
	class Employe : public User {
	private:
		std::string position;
	public:
		void setPosition();
		std::string getPosition(std::string);
		Employe(std::string, std::string, int, std::string, std::string, std::string);
		std::string getName();
		std::string getSurname();
		int getAge();
		std::string getLogin();
		std::string getPassword();
		std::string getPosition();
		void setName(std::string);
		void setSurname(std::string);
		void setAge(int);
		void setLogin(std::string);
		void setPassword(std::string);
		void setPosition(std::string);
		void say(std::string) override;
	};

}
