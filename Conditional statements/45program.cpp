#include <iostream>
using namespace std;

int main() {
    bool val = true; // Fixing the variable declaration
    int n = 5;       // Fixing the variable declaration

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << val << " "; // Adding a space for better output formatting
            val = !val;         // Flipping the boolean value
        }
        cout << "\n"; // Moving to the next line after each row
    }

    return 0;
}
