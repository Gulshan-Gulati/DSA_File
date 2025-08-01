#include <iostream>
using namespace std;

int main() {
    int day = 2;

    switch (day) {
        case 1:
            cout << "Monday." << endl;
            break;
        case 2:
            cout << "Tuesday." << endl;
            break;
        // case 2:  // Duplicate case, not allowed
        //     cout << "Duplicate case." << endl;
        //     break;
        default:
            cout << "Invalid day." << endl;
    }
    return 0;
}