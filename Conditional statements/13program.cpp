#include <iostream>
using namespace std;

int main() {
    //using Ternary operator
    int a = 63, b = 36;
    bool x = (a < b ) ? true : false;
    
    int y = (a > b) ? a : b;
    cout << (a < b) << "," << (a > b) << endl;
    cout << x << "," << y << endl;
    return 0;
}