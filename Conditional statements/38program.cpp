#include <iostream>
using namespace std;

int main() {

    int n = 15;


    for(int i=2; i<=n; i++) {
        int curr = i; // current number to check for
        bool isprime = true;

        for(int j=2; j*j<=i; j++) {
            if(curr % j == 0) {
                isprime = false;

            }
        }
    }

    if(isprime) {
        cout << curr << " ";
    }
cout << endl;
    return 0;

}