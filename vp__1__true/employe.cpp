#include "employe.h"
using namespace std;


namespace FSN {
	Employe::Employe(string tname, string tsurname, int tage, string tlogin, string tpassword, string tposition) {
		name = tname;
		surname = tsurname;
		age = tage;
		login = tlogin;
		password = tpassword;
		position = tposition;
	}
	
	Employe::Employe() {

	}

	void Employe::setName(string tname) {
		name = tname;
	}

	void Employe::setSurname(string tsurname) {
		surname = tsurname;
	}

	void Employe::setAge(int tage) {
		age = tage;
	}

	void Employe::setLogin(string tlogin) {
		login = tlogin;
	}

	void Employe::setPassword(string tpassword) {
		password = tpassword;
	}

	void Employe::setPosition(string tposition) {
		position = tposition;
	}

	string Employe::getName() {
		return name;
	}

	string Employe::getSurname() {
		return surname;
	}

	int Employe::getAge() {
		return age;
	}

	string Employe::getLogin() {
		return login;
	}

	string Employe::getPassword() {
		return password;
	}

	string Employe::getPosition() {
		return position;
	}

	void Employe::say(string words) {
		cout << "Hello I`am " << position << " and I can offer you a " << words;
	}

	bool Employe::operator == (const Employe& other) {
		return this->age == other.age;
	}

	bool Employe::operator > (const Employe& other) {
		return this->age > other.age;
	}

	bool Employe::operator < (const Employe& other) {
		return this->age < other.age;
	}

	void Employe::operator = (const Employe& other) {
		this->name = other.name;
		this->surname = other.surname;
		this->age = other.age;
		this->login = other.login;
		this->password = other.password;
		this->position = other.position;
	}

	ostream& operator << (ostream& os, const Employe& employe) {
		return os << "name: " << employe.name << '\n' << "surname: " << employe.surname << '\n' << "Age: " << employe.age << '\n' << "Position: " << employe.position << '\n' << "Login: " << employe.login << '\n' << "Password: " << employe.password << '\n';
	}

	istream& operator >> (istream& is, Employe& employe) {
		return is >> employe.name >> employe.surname >> employe.age >> employe.position >> employe.login >> employe.password;
	}
}
