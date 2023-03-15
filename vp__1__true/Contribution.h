#include <iostream>
#include "client.h"

namespace FSN{
	class Contribution {
	private:
		std::string cName;
		Client* person;
		int summary;
		double percents;
	public:
		Contribution(std::string, Client*, int, double);
		void setCName(std::string);
		void setClient(Client*);
		void setSummary(int);
		void setPercents(double);
		std::string getCName();
		Client* getClient();
		int getSummary();
		double getPercents();
		void printName();
	};
}


