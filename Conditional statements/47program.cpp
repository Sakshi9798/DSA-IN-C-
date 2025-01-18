#include <iostream>
using namespace std;

int main() {

    // Inverted & rotated half-pyramid

    int n = 10;

    for(int i=1; i<=n; i++) {
        // spaces
            for(int j=1; j<=n-1; j++) {
                cout << " ";
            }
        
        // stars
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}