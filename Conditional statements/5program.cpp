#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "enter marks : ";
    cin >> marks;

    if(marks >= 90) {
        cout << "A" << endl;
    } else if(marks >= 80) {
        cout << "B" << endl;
    } else {
        cout << "c" << endl;
    }
    return 0;
}