#include "MenuItem.h"
#include "Menu.h"
#include "client.h"
#include "employe.h"
#include "Contribution.h"
#include "Source2.cpp"
#include <iostream>
using namespace FSN;
/*
ClassContainer* mas = ClassContainer();
mas[1] = Client("Denis", "Yakimov", 24, "Tolya", "menameisTolya", 900);
*/ 



Client* clients = new Client[10]{
        Client("Denis", "Yakimov", 24, "Tolya", "menameisTolya", 900),
        Client("Pavel", "Donskoy", 32, "Nemu", "nemuLoveryPac", 2900),
        Client("Climentino", "Emanuel",44 , "Nik", "LordNicko23", 200000),
        Client("Nicko", "Perfect", 26, "Pnick", "fdssa", 30),
        Client("Jackman", "Hinss", 25, "Hinssey", "hinsjckey32", 9000000)
};

int CLIENTS_SIZE = 5;

int SIZES = 8;

ClassArray a = ClassArray(0);

void upload() {
    for (int i = 0; i < 5; i++) {
        a.add(clients[i]);
    }
}

int addClient() {
    cout << "input Client data\n";

    int tage, tdeposit;
    string tname, tsurname, tlogin, tpassword;

    cin >> tname >> tsurname >> tage >> tlogin >> tpassword >> tdeposit;
    Client user = Client(tname, tsurname, tage, tlogin, tpassword, tdeposit);
    a.add(user);

    return 100;
}

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
    cout << contribution1;
    return 32;
}

int compareClientsMin() {

    a.sortMaxToMin();

    a.Show();
    
    return 10;
}

int compareClientsMax() {
    
    a.sortMinToMax();

    a.Show();
    
    return 10;
}

int deleteClient() {
    a.Show();
    cout << "input client num ";
    int num;
    cin >> num;
    a.remove(num); 
    return 10;
}

int changeClient() {
    cout << "input client num\n";
    int num;
    cin >> num;
    a.change(num);
    return 10;
};

int main()
{
    upload();

    char wr1[20] = "Meet a client";
    char wr2[30] = "Ask an employee";
    char wr3[20] = "Contribution owner";
    char wr4[40] = "Sort Clients from min deposit to max";
    char wr5[40] = "Sort Clients from max deposit to min";
    char wr6[20] = "Delete client";
    char wr7[20] = "add client";
    char wr8[20] = "change Client";

 
    MenuItem item1(wr1, testFunc1);
    MenuItem item2(wr2, testFunc2);
    MenuItem item3(wr3, testFunc3);
    MenuItem item4(wr4, compareClientsMin);
    MenuItem item5(wr5, compareClientsMax);
    MenuItem item6(wr6, deleteClient);
    MenuItem item7(wr7, addClient);
    MenuItem item8(wr8, changeClient);



    MenuItem allItems[8]{ item1, item2, item3, item4, item5, item6, item7, item8};

    char menuName[20] = "first program";
    MyMenu menu(menuName, allItems, SIZES);
    while (menu.runMenu());
    return 0;
}

