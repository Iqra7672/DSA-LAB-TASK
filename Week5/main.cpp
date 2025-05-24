// EXERCISE 5.1
#include <iostream>
#include "pque.cpp"
using namespace std;

int main() {
    pque<int> info;

    int value, p;
    for (int i = 0; i < 10; i++) {
        cout << "Enter element at index " << i << ": ";
        cin >> value;
        cout << "Enter priority (0-9): ";
        cin >> p;
        info.insert(value, p);
    }

    int rem;
    cout << "\nRemoving elements based on priority:\n";
    while (!info.isempty()) {
        info.remove(rem);
        cout << "Removed: " << rem << endl;
    }

    return 0;
}



// EXERCISE 5.2
#include "pque.cpp"
#include <iostream>
using namespace std;

int main() {
    int levels;
    cout << "Enter the number of priority levels: ";
    cin >> levels;

    pque<int> info(levels);
    int value, p;

    for (int i = 0; i < 10; i++) {
        cout << "Enter element at index " << i << ": ";
        cin >> value;
        cout << "Enter priority (0-" << levels - 1 << "): ";
        cin >> p;
        info.insert(value, p);
    }

    int rem;
    cout << "\nRemoving elements based on priority:\n";
    while (!info.isempty()) {
        info.remove(rem);
        cout << "Removed: " << rem << endl;
    }

    return 0;
}
