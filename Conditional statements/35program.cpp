#include <iostream>
using namespace std;

int main() {
    // multiplication table of n
    int n = 10;
    
    for(int i=1; i<=10; i++) {
        cout << (n * i) << " ";
    }

    cout << endl;
    return 0;
}