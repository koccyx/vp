#include "MenuItem.h"
#include "Menu.h"
#include "client.h"
#include "employe.h"
#include "Contribution.h"
#include <iostream>
using namespace FSN;

Client* clients = new Client[10]{
        Client("Denis", "Yakimov", 24, "Tolya", "menameisTolya", 900),
        Client("Pavel", "Donskoy", 32, "Nemu", "nemuLoveryPac", 2900),
        Client("Climentino", "Emanuel",44 , "Nik", "LordNicko23", 200000),
        Client("Nicko", "Perfect", 26, "Pnick", "fdssa", 30),
        Client("Jackman", "Hinss", 25, "Hinssey", "hinsjckey32", 9000000)
};

int CLIENTS_SIZE = 5;

int SIZES = 6;


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

int compareClientsMin() {

    for (int i = 0; i < CLIENTS_SIZE - 1; i++) {
        for (int j = 0; j < CLIENTS_SIZE - 1 - i; j++) {
            if (clients[j] > clients[j + 1]) {
                Client temp = clients[j];
                clients[j] = clients[j + 1];
                clients[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < CLIENTS_SIZE; i++) {
        clients[i].print();
    }

    delete[] clients;
    
    return 10;
}

int compareClientsMax() {
    for (int i = 0; i < CLIENTS_SIZE - 1; i++) {
        for (int j = 0; j < CLIENTS_SIZE - 1 - i; j++) {
            if (clients[j] < clients[j + 1]) {
                Client temp = clients[j];
                clients[j] = clients[j + 1];
                clients[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < CLIENTS_SIZE; i++) {
        clients[i].print();
    }

    delete[] clients;
    
    return 10;
}

int deleteClient() {
    int num;
    cout << "Wich client you woudl like to delete?\n";
    for (int i = 0; i < CLIENTS_SIZE; i++) {
        cout << i+1 << '|';
        clients[i].print();
    }
    do {
        cout << '\n' << "select -> ";
        cin >> num;
    } while (num > CLIENTS_SIZE || num < 0);
    num--;
    CLIENTS_SIZE--;
    for (int i = num; i < CLIENTS_SIZE; i++) {
        clients[i] = clients[i + 1];
    }
    return 10;
}

int main()
{
    char wr1[20] = "Meet a client";
    char wr2[30] = "Ask an employee";
    char wr3[20] = "Contribution owner";
    char wr4[40] = "Sort Clients from min deposit to max";
    char wr5[40] = "Sort Clients from max deposit to min";
    char wr6[20] = "Delete client";

 
    MenuItem item1(wr1, testFunc1);
    MenuItem item2(wr2, testFunc2);
    MenuItem item3(wr3, testFunc3);
    MenuItem item4(wr4, compareClientsMin);
    MenuItem item5(wr5, compareClientsMax);
    MenuItem item6(wr6, deleteClient);


    MenuItem allItems[6]{ item1, item2, item3, item4, item5, item6};

    char menuName[20] = "first program";
    MyMenu menu(menuName, allItems, SIZES);
    while (menu.runMenu());
    return 0;
}

