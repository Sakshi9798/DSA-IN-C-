#include <iostream>
using namespace std;

int main() {
    // number is prime or not

    int n = 9;
    bool isprime = true;

    for(int i=2; i<=n-1; i++) {
        if(n % i == 0) //i is a factor of n; i completely didides n; n is non-priime
        isprime = false;
        break;
    }

    if(isprime) {
        cout << "number is prime";
    } else{
        cout << "nuber is not prime" << endl;
    
    
    }
    return 0;
}