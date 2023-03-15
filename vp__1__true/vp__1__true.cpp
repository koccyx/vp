#include "MenuItem.h"
#include "Menu.h"
#include "client.h"
#include "employe.h"
#include "Contribution.h"
#include <iostream>
using namespace FSN;


int testFunc1() {
    Client client1("Alex", "Hiam", 23, "Ahims", "123al23", "k3213");
    client1.say("get a credit\n");
    return 10;
}


int testFunc2() {
    Employe employe1("Michal", "Czevich", 20, "Miczy", "m2094", "top manager");
    employe1.say("best services\n");
    return 3 + 2;
}

int testFunc3() {
    Client client1("Alex", "Hiam", 23, "Ahims", "123al23", "k3213");
    Contribution contribution1("C321", &client1, 1000, 0.1);
    contribution1.printName();
    return 32;
}

int size = 3;

int main()
{
    char wr1[20] = "Meet a client";
    char wr2[30] = "Ask an employee";
    char wr3[20] = "contribution owner";
 
    MenuItem item1(wr1, testFunc1);
    MenuItem item2(wr2, testFunc2);
    MenuItem item3(wr3, testFunc3);

    MenuItem allItems[3]{ item1, item2, item3 };

    char menuName[20] = "first program";
    MyMenu menu(menuName, allItems, size);
    while (menu.runMenu());
    return 0;
}

