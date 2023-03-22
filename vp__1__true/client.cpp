#include "client.h"
#include <iomanip>
using namespace std;


namespace FSN {
	Client::Client(string tname, string tsurname, int tage, string tlogin, string tpassword, int tdeposit) {
		name = tname;
		surname = tsurname;
		age = tage;
		login = tlogin;
		password = tpassword;
		deposit = tdeposit;
	}
	Client::Client() {

	}

	void Client::setName(string tname) {
		name = tname;
	}

	void Client::setSurname(string tsurname) {
		surname = tsurname;
	}

	void Client::setAge(int tage) {
		age = tage;
	}

	void Client::setLogin(string tlogin) {
		login = tlogin;
	}

	void Client::setPassword(string tpassword) {
		password = tpassword;
	}

	void Client::setDeposit(int tdeposit) {
		deposit = tdeposit;
	}

	string Client::getName() {
		return name;
	}

	string Client::getSurname() {
		return surname;
	}

	int Client::getAge() {
		return age;
	}

	string Client::getLogin() {
		return login;
	}

	string Client::getPassword() {
		return password;
	}

	int Client::getDeposit() {
		return deposit;
	}

	void Client::say(string words) {
		cout << "Hello I want to " << words;
	}

	void Client::print() {
		cout << setw(12) << this->name << '|' << setw(12) << this->surname << '|' << setw(3) << this->age << '|' << setw(10) << this->login << '|' << setw(15) << this->password << '|' << setw(10) << this->deposit << '|' << '\n';
	}

	bool Client::operator == (const Client& other) {
		return this->deposit == other.deposit;
	}

	bool Client::operator > (const Client& other) {
		return this->deposit > other.deposit;
	}

	bool Client::operator < (const Client& other) {
		return this->deposit < other.deposit;
	}

	void Client::operator = (const Client& other) {
		this->name = other.name;
		this->surname = other.surname;
		this->age = other.age;
		this->login = other.login;
		this->password = other.password;
		this->deposit = other.deposit;
	}

	ostream& operator << (ostream& os, const Client& client) {
		return os << "name: " << client.name << '\n' << "surname: " << client.surname << '\n' << "Age: " << client.age << '\n' << "Deposit: " << client.deposit << '\n' << "Login: " << client.login << '\n' << "Password: " << client.password << '\n';
	}
	istream& operator >> (istream& is, Client& client) {
		return is >> client.name >> client.surname >> client.age >> client.deposit >> client.login >> client.password;
	}
}	
