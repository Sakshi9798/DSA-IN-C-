#include <iostream>
using namespace std;

int main() {

    // build calculator
    int a, b;
    char op;

    cout << "enter a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;
    cout << "enter operator : ";
    cin >> op;

    //build calculator using if else
    if(op == '+') {
        cout << "a + b = " << (a + b) << endl;
    } else if(op == '-') {
        cout << "a - b = " << (a  - b) << endl;
    } else if(op == '*') {
        cout << "a * b = " << (a * b) << endl;
    } else if(op == '/') {
        cout << "a / b = " << (a / b) << endl;
    } else{
        cout << "invalid operator" << endl;
    }
    return 0;


}