
namespace FSN {
    template <class T>
    class Array
    {
    private:
        T* mData;
        int mCount;

    public:
        Array(int); 
        ~Array();

        void add(T value);
        void insert(T value, int index);
        bool isEmpty();
        void display();
        bool remove(T value);
        bool removeAt(int index);
        int size();

        T& operator[](const int index);
    };
}
