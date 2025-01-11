#include <iostream>
using namespace std;

int main() {
    int number;

    // do-while loop
    do {
        cout << "Enter a positive number (or a negative number to quit): ";
        cin >> number;

        if (number >= 0) {
            cout << "You entered: " << number << endl;
        } else {
            cout << "Negative number entered. Exiting..." << endl;
        }
    } while (number >= 0); // Repeat as long as the number is non-negative

    return 0;
}
