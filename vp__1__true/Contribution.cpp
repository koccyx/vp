#include "Contribution.h"
using namespace std;


namespace FSN {
	Contribution::Contribution(string cName, Client* person, int summary, double percents) {
		this->cName = cName;
		this->person = person;
		this->summary = summary;
		this->percents = percents;
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
}
