#include <iostream>
using namespace std;

int sum(int a , int b) { // a and b are parameters
    int sum = a + b;
    return sum;
}

int main() {
    int s = sum(2, 4); // 2, 4 are arguments (// arguments are fixed values jinke uppar operations hota h)
    cout << "sum = " << s << endl;
    return 0;
}