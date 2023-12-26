#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "Press Enter 3 times to reveal your future.\n";
    for (int i = 0; i < 3; ++i) {
        while (cin.get() != '\n');
    }

    srand(time(0));
    int grade = rand() % 8; 

    switch (grade) {
        case 0:
            cout << "You will get A in this 261102.";
            break;
        case 1:
            cout << "You will get B+ in this 261102.";
            break;
        case 2:
            cout << "You will get B in this 261102.";
            break;
        case 3:
            cout << "You will get C+ in this 261102.";
            break;
        case 4:
            cout << "You will get C in this 261102.";
            break;
        case 5:
            cout << "You will get D+ in this 261102.";
            break;
        case 6:
            cout << "You will get D in this 261102.";
            break;
        case 7:
            cout << "You will get F in this 261102.";
            break;
    }

    return 0;
}
