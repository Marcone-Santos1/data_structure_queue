typedef int T;
const int MAX_ITEMS = 100;

class queue {
    private:
        int first, last;
        T* vec;

    public:
        queue(); // constructor
        ~queue(); // destructor
        bool isFull();
        bool isEmpty();
        void push(T item);
        T pop();
        void print();
};