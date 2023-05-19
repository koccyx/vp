#include "MenuItem.h"
#include "Menu.h"
#include "client.h"
#include "employe.h"
#include "Contribution.h"
#include "myContainer.h"
#include <iostream>
#include <fstream>
using namespace FSN;


MyVector<Client> clients;




Client* clientus = new Client[10]{
        Client("Denis", "Yakimov", 24, "Tolya", "menameisTolya", 900),
        Client("Pavel", "Donskoy", 32, "Nemu", "nemuLoveryPac", 2900),
        Client("Climentino", "Emanuel",44 , "Nik", "LordNicko23", 200000),
        Client("Nicko", "Perfect", 26, "Pnick", "fdssa", 30),
        Client("Jackman", "Hinss", 25, "Hinssey", "hinsjckey32", 9000000)
};





int SIZES = 6;




int addClient() {
    int count;
    cout << "input amount of clients: "; 
    cin >> count;
    for (int i = 0; i < count; i++) {
        cout << "\nInput Client data:\n";
        Client client;
        cin >> client;  	
        clients.addElement(client);
    }
    cout << "\n Inputing is done \n\n";
    return 40;
}


int printClient() {
    clients.print();
    return 20;
}


/*int sortClient() {
    for (int i = 0; i < clients.Size(); i++) {
        for (int j = 0; j < clients.Size() - 1; j++) {
            if (clients[i] > clients[i + 1]) {
                Client tempClient = clients[i + 1];
                clients[i + 1] = clients[i];
                clients[i] = tempClient;
            }
        }
    }
    cout << "sorting is done";
    return 20;
}

*/
int deleteClient() {
    printClient();
    cout << "\nChoice the client: ";
    int deleteNumber;  	
    cin >> deleteNumber;
    cout << "\n";
    clients.deleteElement(deleteNumber);

    cout << "Client deleted" << '\n' << '\n';
    return 10;
}

int printClients() {
    clients.print();
    return 20;
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



int main() {
    char wr1[20] = "Meet a client";
    char wr2[30] = "Ask an employee";
    char wr3[20] = "Contribution owner";
    char wr4[40] = "Sort Clients from min deposit to max";
    char wr5[40] = "Print clients";
    char wr6[20] = "Delete client";
    char wr7[20] = "add client";
    char wr8[20] = "change Client";

    for (int i = 0; i < 5; i++) {
        clients.addElement(clientus[i]);
    }
    
    MenuItem item1(wr1, testFunc1);
    MenuItem item2(wr2, testFunc2);
    MenuItem item3(wr3, testFunc3);
    //MenuItem item4(wr4, sortClient);
    MenuItem item4(wr6, deleteClient);
    MenuItem item5(wr7, addClient);
    MenuItem item6(wr5, printClient);



    MenuItem allItems[6]{ item1, item2, item3, item4, item5, item6};

    char menuName[20] = "first program";
    MyMenu menu(menuName, allItems, SIZES);
    while (menu.runMenu());

}

