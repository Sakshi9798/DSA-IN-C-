#include <iostream>
using namespace std;

void sayHello() {
    cout << "Hello :)\n";
}

//assistant sayHello ko call krega then "work done" print kra dega
void assistant() {
    sayHello();
    cout << "work done \n";
}

// exectuion start from mai n functions

int main() {
    assistant(); //function call
    return 0;
} 