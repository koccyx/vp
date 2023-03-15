#include "client.h"
using namespace std;


namespace FSN {
	Client::Client(string tname, string tsurname, int tage, string tlogin, string tpassword, string tdeposit) {
		name = tname;
		surname = tsurname;
		age = tage;
		login = tlogin;
		password = tpassword;
		deposit = tdeposit;
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

	void Client::setDeposit(string tdeposit) {
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

	string Client::getDeposit() {
		return deposit;
	}

	void Client::say(string words) {
		cout << "Hello I want to " << words;
	}
}
