#include <iostream>
#include "queue.h"

using namespace std;

queue::queue()
{
    first, last = 0;
    vec = new T[MAX_ITEMS];
}

queue::~queue()
{
    delete [] vec;
}

bool queue::isFull()
{
    return (length == MAX_ITEMS);
}

bool queue::isEmpty()
{
    return (first == last);
}

void queue::push(T item)
{
    if (this->isFull()) {
        cout << "\nThe queue is full. It's not possible to add this element in queue\n";
        return;
    }

    vec[length] = item;
    length++;
}

T queue::pop()
{

    if (this->isEmpty()) {
        cout << "\nThe queue is empty. It's not possible to pop any element\n";
        return 0;
    }

    length--;
    return vec[length];
}

void queue::print()
{
    cout << "queue: [";
    for (int i = 0; i < length; i++) {
        cout << vec[i] << " | ";
    }
    cout << "]\n";

}