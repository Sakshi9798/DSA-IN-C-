#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "enetr number : ";
        cin >> n;
        if(n % 10 == 0) { // multiple of number 10
            break;
            }

        cout << "you entered" << n << endl;
        } while(true);

    return 0;
}