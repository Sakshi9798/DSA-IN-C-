#include <iostream>
using namespace std;

int main() {
    // print butterfly pattern

    int n = 4;

//upper half
    for(int i=1; i<=n; i++) {
        // stars 
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        for(int j=1; j<=2*(n-i); j++) {
            cout << " ";
        }
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}