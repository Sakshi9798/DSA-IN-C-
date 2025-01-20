#include <iostream>
using namespace std;

int main() {
    // Diamond pattern
    
    int n = 4;

    // 1st pyramid
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i; j++) {
            // spaces
            cout << " ";
            }
            for(int j=1; j<=2*(i-1); j++) {
                // stars
                cout << "*";
            }
            cout << endl;
    }

    // 2nd pyramid
    for(int i=n; i<=1 ; i--) {
        // spaces
        for(int j=1; j<=n-1; j++) {
            cout << " ";
            }
            // stars
            for(int j=1; j<=2*(i-1); j++) {
                cout << "*";
            }
            cout << endl;
    }
    return 0;
}