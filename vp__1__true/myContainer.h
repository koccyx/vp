#pragma once
#include<iomanip>
#include<string>
namespace FSN {
    template<typename T>
    class MyVector {
    private:
        T* begin;
        int size;
        int capacity;
        void expandVector() {
            T* newBegin = new T[this->capacity * 2];
            for (int i = 0; i < this->size; i++) {
                newBegin[i] = this->begin[i];
            }
            delete[] this->begin;
            this->begin = newBegin;
            this->capacity *= 2;
        }
        void expandVector(int length) {
            T* newBegin = new T[length * 2];
            for (int i = 0; i < size; ++i) {
                newBegin[i] = begin[i];
            }
            delete[] this->begin;
            this - begin = newBegin;



        }
    public:
        class Iterator {
            friend class MyVector<T>;
        private:
            T* curr;
        public:
            Iterator(T curr) {
                this->curr = curr;
            }
            T operator*() { return this->*curr; }
            void operator++() { return this->curr++; }
            void operator++(int plus) { return this->curr++; }
            void operator--() { return this->curr--; }
            void operator--(int minus) { return this->curr--; }

            void operator+(int plus) { return this->curr + plus; }
            void operator-(int minus) { return this->curr - minus; }

            bool operator==(const Iterator& it) { return this->curr == it.curr; }
            bool operator!=(const Iterator& it) { return this->curr != it.curr; }
        };

        T operator[](int index) {
            if (index < 0 || index >= size) {
                throw "out of range";

            }
            return begin[index];
        }
        T* getBegin() {
            return begin;
        }
        T* getEnd() {
            return (begin + size);
        }

        MyVector() {
            this->begin = new T[1];
            this->size = 0;
            this->capacity = 1;

        }
        MyVector(int len) {
            begin = new T[len];
            size = 0;
            capacity = len;
        }

        MyVector(const MyVector<T>& vector) {
            this->size = vector.size;
            this->capacity = vector.capacity;
            this->begin = new T[this->capacity];
            for (int i = 0; i < this->size; ++i) {
                this->begin[i] = vector.begin[i];
            }

        }

        ~MyVector() {
            delete[] begin;
        }

        //methods
        int getSize() {
            return this->size;
        }

        void addElement(T newElement) {
            if (this->size == this->capacity) {
                expandVector();
            }
            this->begin[size] = newElement;
            this->size++;
        }
        void insertElement(T newELement, int position) {
            if (position < 0 || position >= size) {
                throw "out of range";
            }
            if (this->size == this->capacity) expandVector();
            this->begin[position] = newELement;
            for (int i = position + 1; i < this->size + 1; ++i) {
                this->begin[i] = this->begin[i - 1];
            }
            this->size++;

        }
        bool empty() {
            return this->size == 0;
        }
        void deleteElement(int index) {
            if (index < 0 || index >= size) {
                throw "out of range";
            }
            for (int i = index; i < this->size; ++i) {
                this->begin[i] = this->begin[i + 1];
            }
           //delete this->begin[this->size];

           this->size--;
        }

        void print() {
            std::cout << "|Name------|Surname-----|Age-|Deposit--|Login----|Password------|\n";
            for (int i = 0; i < this->size; i++) {
                std::cout << "|" << setw(10) << begin[i].getName() << "|" << setw(12) << begin[i].getSurname() << "|" << setw(4) << begin[i].getAge() << "|" << setw(9) << begin[i].getDeposit() << "|" << setw(9) << begin[i].getLogin() << "|" << setw(14) << begin[i].getPassword() << '|' << '\n';
            }
        }

        void sort(bool(*comp)(const T& a, const T& b)) {
            sort(getBegin(), getEnd(), comp);
        }



    };

}
