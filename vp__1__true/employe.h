#pragma once
#include "User.h"
#include <iostream>
using namespace std;


namespace FSN{
	class Employe : public User {
	private:
		std::string position;
	public:
		Employe(std::string, std::string, int, std::string, std::string, std::string);
		Employe();
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
		bool operator == (const Employe& other);
		bool operator > (const Employe& other);
		bool operator < (const Employe& other);
		void operator = (const Employe& other);
		friend ostream& operator << (ostream& os, const Employe&);
		friend std::istream& operator >> (istream& is, Employe&);
	};

}
