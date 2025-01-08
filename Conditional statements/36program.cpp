#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter 2 digit number : ";
    cin >> n;

    int num = n; // creating a copy

    int dig1 = num % 10;
    num /= 10;
    int dig2 = num % 10;
    num /= 10;

    int sqursum = dig1*dig1 + dig2*dig2;

    if(sqursum == n) {
        cout << "is an armstrong number" << "\n";
    } else {
        cout << "is not armstrong number" << "\n";
    }

    cout << endl;
    return 0;
}