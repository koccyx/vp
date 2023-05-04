#include <iostream>
#include "Client.h"
#include "Container.h"
using namespace std;

namespace FSN {


    template <class T>
    Array<T>::Array(int num)
    {
        mCount = num;
        mData = new T[mCount];
    }

    template <class T>
    Array<T>::~Array()
    {
        delete[] mData;
    }



    template <class T>
    void Array<T>::add(T value)
    {
        T* tmp = new T[mCount + 1];

        for (int i = 0; i < mCount; i++)
        {
            tmp[i] = mData[i];
        }

        mCount++;

        delete[] mData;
        mData = tmp;

        mData[mCount - 1] = value;
    }

    template <class T>
    void Array<T>::display()
    {
        if (isEmpty())
        {
            cout
                << "The array is empty."
                << "\n\n";
            return;
        }

        cout << "(";

        for (int i = 0; i < mCount; i++)
        {

            cout << mData[i];

            if (i < mCount - 1)
                cout << ", ";
        }

        cout << ")" << "\n\n";
    }

    template <class T>
    bool Array<T>::isEmpty()
    {
        return mCount == 0;
    }

    template <class T>
    int Array<T>::size()
    {
        return mCount;
    }


    template <class T>
    T& Array<T>::operator[](const int index)
    {
        return mData[index];
    }
}
