#pragma once
#include "User.h"


namespace FSN {
	class Client : public User {
	private:
		int deposit;
	public:
		Client(std::string, std::string, int, std::string, std::string, int);
		Client(void);
		std::string getName();
		std::string getSurname();
		int getAge();
		std::string getLogin();
		std::string getPassword();
		int getDeposit();
		void setName(std::string);
		void setSurname(std::string);
		void setAge(int);
		void setLogin(std::string);
		void setPassword(std::string);
		void setDeposit(int);
		void print();
		void say(std::string) override;
		bool operator == (const Client& other);
		bool operator > (const Client& other);
		bool operator < (const Client& other);
		void operator = (const Client& other);
		friend ostream& operator << (ostream& os, const Client&);
		friend std::istream& operator >> (istream& is, Client&);
	};
}
