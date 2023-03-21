#include "Contribution.h"
#include <iostream>
using namespace std;


namespace FSN {
	Contribution::Contribution(string cName, Client* person, int summary, double percents) {
		this->cName = cName;
		this->person = person;
		this->summary = summary;
		this->percents = percents;
	}

	Contribution::Contribution() {

	}

	Client* Contribution::getClient() {
		return person;
	}

	string Contribution::getCName() {
		return cName;
	}

	int Contribution::getSummary() {
		return summary;
	}

	double Contribution::getPercents() {
		return percents;
	}

	void Contribution::printName() {
		cout << "This " << cName << " owner is " << person->getName() << '\n';
	}

	void Contribution::setClient(Client* tperson) {
		person = tperson;
	}

	void Contribution::setCName(string tname) {
		cName = tname;
	}

	void Contribution::setPercents(double percents) {
		this->percents = percents;
	}

	void Contribution::setSummary(int summary) {
		this->summary = summary;
	}

	ostream& operator << (ostream& os, const Contribution& contribution) {
		return os << "Contribution name: " << contribution.cName << '\n' << "Owner: " << contribution.person << '\n' << "Summary: " << contribution.summary << '\n' << "Percents: " << contribution.percents << '\n';
	}

	istream& operator >> (istream& is, Contribution& contribution) {
		return is >> contribution.cName >> contribution.summary >> contribution.percents;
	}

	bool Contribution::operator == (const Contribution & other) {
		return this->summary == other.summary;
	}

	bool Contribution::operator > (const Contribution& other) {
		return this->summary > other.summary;
	}

	bool Contribution::operator < (const Contribution& other) {
		return this->summary < other.summary;
	}

	void Contribution::operator = (const Contribution& other) {
		this->cName = other.cName;
		this->percents = other.percents;
		this->person = other.person;
		this->summary = other.summary;
	}
}
