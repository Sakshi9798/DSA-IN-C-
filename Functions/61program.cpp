#include <iostream>
using namespace std;

isPrime(int n) {
    if(n==1) {  //if n is 1, it's not Prime
        return false;
    }

    for(int i = 2; i<=n-1; i++) {
        if(n%i==0) { // non-prime
            return false;
        }
    }

    return true;
} //n -> true, else false

int main() {
    cout << isPrime(23) << endl; // call the isPrime function
    return 0;
}