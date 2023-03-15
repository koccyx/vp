#pragma once
#include "User.h"


namespace FSN {
	class Client : public User {
	private:
		std::string deposit;
	public:
		Client(std::string, std::string, int, std::string, std::string, std::string);
		std::string getName();
		std::string getSurname();
		int getAge();
		std::string getLogin();
		std::string getPassword();
		std::string getDeposit();
		void setName(std::string);
		void setSurname(std::string);
		void setAge(int);
		void setLogin(std::string);
		void setPassword(std::string);
		void setDeposit(std::string);
		void say(std::string) override;
	};
}
