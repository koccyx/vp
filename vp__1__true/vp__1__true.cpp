#include "MenuItem.h"
#include "Menu.h"
#include "client.h"
#include "employe.h"
#include "Contribution.h"
#include <iostream>
using namespace FSN;


int testFunc1() {
    Client client1("Alex", "Hiam", 23, "Ahims", "123al23", 39000);
    client1.say("get a credit\n");
    std::cout << client1 << '\n';
    return 10;
}


int testFunc2() {
    Employe employe1("Michal", "Czevich", 20, "Miczy", "m2094", "top manager");
    employe1.say("best services\n");
    std::cout << employe1 << '\n';
    return 3 + 2;
}

int testFunc3() {
    Client client1("Alex", "Hiam", 23, "Ahims", "123al23", 92000);
    Contribution contribution1("C321", &client1, 1000, 0.1);
    std::cin >> contribution1;
    std::cout << contribution1.getPercents() << '\n';
    return 32;
}

int compareClients() {
    Client* clients = new Client[10]{
        Client("Denis", "Yakimov", 24, "Tolya", "menameisTolya", 900),
        Client("Pavel", "Donskoy", 32, "Nemu", "nemuLoveryPac", 2900),
        Client("Climentino", "Emanuel",44 , "Nik", "LordNicko23", 200000),
        Client("Nicko", "Perfect", 26, "Pnick", "fdssa", 30),
        Client("Jackman", "Hinss", 25, "Hinssey", "hinsjckey32", 9000000)
    };
    int clientsSize = 5;
    for (int i = 0; i < clientsSize - 1; i++) {
        for (int j = 0; j < clientsSize - 1 - i; j++) {
            if (clients[j] > clients[j + 1]) {
                Client temp = clients[j];
                clients[j] = clients[j + 1];
                clients[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < clientsSize; i++) {
        cout << clients[i].getDeposit() << '\n';
    }
    delete[] clients;
    return 10;
}

int sizes = 4;

int main()
{
    char wr1[20] = "Meet a client";
    char wr2[30] = "Ask an employee";
    char wr3[20] = "contribution owner";
    char wr4[20] = "Overloading";
 
    MenuItem item1(wr1, testFunc1);
    MenuItem item2(wr2, testFunc2);
    MenuItem item3(wr3, testFunc3);
    MenuItem item4(wr4, compareClients);

    MenuItem allItems[4]{ item1, item2, item3, item4 };

    char menuName[20] = "first program";
    MyMenu menu(menuName, allItems, sizes);
    while (menu.runMenu());
    return 0;
}

