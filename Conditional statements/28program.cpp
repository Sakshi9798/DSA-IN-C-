#include <iostream>
using namespace std;

int main() {

// difference b/w do while and while loop
    int val = 1;

    do {
        cout << "coffee in do-while loop" << endl;
    } while(val > 5);

    while(val > 5) {
        cout << "chai in while loop";
    }
    return 0;
}