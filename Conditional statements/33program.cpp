#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n =2;
    bool isprime = true;

    for(int i=2; i<=sqrt(n); i++) {
        if(n % i == 0) { // i is a factor of n;
        isprime = false;
        break;
        }
    }

    if(isprime) {
        cout << "number is prime" << endl;
    } else{
        cout << "number is not prime" << endl;
    }
    return 0;
}