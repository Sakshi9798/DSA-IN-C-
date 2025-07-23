//print all primes in a range from 2 to n.

#include <iostream>
using namespace std;

bool isprime(int n) {
    if(n==1) {
        return false;
    }

    for(int i=2; i*i<=n; i++) {
        if(n% i == 0) {
            return false;
        }
    }

    return true;
}

void allprime(int n) {
    // all prime -> from 2 to n
    for(int i=2; i<=n; i++) {
        if(isprime(i)) { // function call here
            cout << i << " ";
        }
    }

    cout << endl;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    allprime(n);  // Call the function to print primes
    return 0;
}