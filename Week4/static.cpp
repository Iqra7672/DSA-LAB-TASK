#include "static.h"
int main() {
    // ==============================================
    //                EXERCISE 4.1
    // ==============================================
    Queue<int> numbers;
    cout << "ADDING NUMBERS: ";
    for (int i = 1; i <= 10; i++) {
        numbers.insert(i);
        cout << i << " ";
    }
    cout << "\n\nREMOVING NUMBERS: ";
    int num;
    for (int i = 0; i < 10; i++) {
        numbers.remove(num);
        cout << num << " ";
    }

    // ==============================================
    //                EXERCISE 4.2
    // ==============================================
    Queue<string> names[8];

    names[0].insert("ahmed");
    names[1].insert("fatima");
    names[2].insert("bilal");
    names[3].insert("noor");
    names[4].insert("danish");
    names[5].insert("hira");
    names[6].insert("ali");
    names[7].insert("sana");

    cout << "\n\nBESTIES NAMES ADDED AND REMOVED:\n";
    string besties;
    for (int i = 0; i < 8; i++) {
        names[i].remove(besties);
        cout << besties << " ";
    }
    cout << endl;
}
