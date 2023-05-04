#include <iostream>
#include <string>
#include "User.h"
#include "client.cpp"
#include "employe.cpp"

namespace FSN {
	class ClassContainer {
	public:
		class ClassIterator {
			friend class ClassContainer;
		public:
			ClassIterator(const ClassIterator& other) : myClient(other.myClient) {}

			bool operator==(const ClassIterator& other) const {
				return myClient->getDeposit() == other.myClient->getDeposit();
			}

			bool operator!=(const ClassIterator& other) const {
				return myClient->getDeposit() == other.myClient->getDeposit();;
			}

			ClassIterator& operator++() {
				++myClient;
				return *this;
			}

			Client& operator*() const {
				return *myClient;
			}

		private:
			Client* myClient;
			ClassIterator(Client* person) : myClient(person) {};
		};

		typedef ClassIterator iterator;
		typedef ClassIterator constIterator;

	private:
		size_t arrLen{};
		Client* arrClients{};
		Client* arrEnd{};
		void initArr() {
			arrLen = 1;
			arrClients = new Client[arrLen]{};
			arrEnd = arrClients + 1;
		}
	};
}