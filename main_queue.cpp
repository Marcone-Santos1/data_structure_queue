#include <iostream>
#include "queue.h"

using namespace std;

void execute(int& option, int& item, queue& stack);

int main() {
    queue queue;
    T item;

    int option;

    cout << "Queue generator: \n";

    do {


        cout << "\nOptions: \n";        
        cout << "0 - stop \n";
        cout << "1 - push one element in queue \n";
        cout << "2 - pop one element of queue \n";
        cout << "3 - print queue \n";
        cout << "Enter with a option: ";
        cin >> option;

        execute(option, item, queue);

    } while (option != 0);
    

    return 0;
}

void execute(int& option, int& item, queue& stack) {
    if (option == 1) {
        cout << "Enter with a element to push in queue: ";
        cin >> item;
        stack.push(item);
        return;
    }

    if (option == 2) {
        item = stack.pop();
        
        cout << "Poped element: " << item << endl;
        return;
    }

    if (option == 3) {
        stack.print();
        return;
    }
}