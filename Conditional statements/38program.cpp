#include <iostream>
using namespace std;

int main() {
    int n = 15;

    for (int i = 2; i <= n; i++) {
        bool isprime = true; // Assume the number is prime

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) { // If divisible, it is not prime
                isprime = false;
                break; // Exit the loop early
            }
        }

        if (isprime) {
            cout << i << " "; // Print the prime number
        }
    }

    cout << endl;
    return 0;
}
