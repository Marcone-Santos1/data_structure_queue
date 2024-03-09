#include <iostream>
#include "queue.h"

using namespace std;

queue::queue()
{
    first = 0;
    last = 0;
    vec = new T[MAX_ITEMS];
}

queue::~queue()
{
    delete [] vec;
}

bool queue::isFull()
{
    return (last - first == MAX_ITEMS);
}

bool queue::isEmpty()
{
    return (first == last);
}

void queue::push(T item)
{
    if (isFull()) {
        cout << "\nThe queue is full. It's not possible to add this element in queue\n";
        return;
    }

    vec[last % MAX_ITEMS] = item;
    last++;
}

T queue::pop()
{

    if (isEmpty()) {
        cout << "\nThe queue is empty. It's not possible to pop any element\n";
        return 0;
    }

    first++;
    return vec[(first - 1) % MAX_ITEMS];
}

void queue::print()
{
    cout << "queue: [";
    for (int i = first; i < last; i++) {
        cout << vec[i % MAX_ITEMS] << " ";
    }
    cout << "]\n";

}