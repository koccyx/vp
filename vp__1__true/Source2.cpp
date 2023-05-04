#include <iostream>
#include "client.h"
#include <vector>
using namespace std;

namespace FSN {
    class ClassArray
    {
    private:
        Client* arr;
        int len;
        int curLen = 0;
    public:
        ClassArray(int length)
        {
            len = length;
            arr = new Client[len];
        }

        ~ClassArray()
        {
            delete[]arr;
        }


        void Show()
        {
            for (int i = 0; i < len; i++)
            {
                arr[i].print();
            }
        }

        Client get(int num) { return arr[num]; }

        void change(int num) {
            cout << "\n Input user data";
            string tname;
            string tsurname;
            int tage;
            string tlogin;
            string tpassword;
            int tdeposit;
            cin >> tname >> tsurname >> tage >> tlogin >> tpassword >> tdeposit;
            arr[num].change(tname, tsurname, tage, tlogin, tpassword, tdeposit);
        }

        void add(Client value)
        {
            Client* tmp = new Client[len + 1];

            for (int i = 0; i < len; i++)
            {
                tmp[i] = arr[i];
            }

            len++;

            delete[] arr;
            arr = tmp;

            arr[len - 1] = value;
        }

        void remove(int num) {
            Client* tmp = new Client[len];
            int defIndex = 0;
            for (int i = 0; i < len; i++)
            {   
                if (i != num - 1) {
                    tmp[i - defIndex] = arr[i];
                }
                else {
                    defIndex += 1;
                }
            }

            len--;

            delete[] arr;
            arr = tmp;
        }

        void sortMaxToMin() {
            for (int i = 0; i < len - 1; i++) {
                for (int j = 0; j < len - 1 - i; j++) {
                    if (arr[j] > arr[j + 1]) {
                        Client temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
        }

        void sortMinToMax() {
            for (int i = 0; i < len - 1; i++) {
                for (int j = 0; j < len - 1 - i; j++) {
                    if (arr[j] < arr[j + 1]) {
                        Client temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
        }
        

    };
}
