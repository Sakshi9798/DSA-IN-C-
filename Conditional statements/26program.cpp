
#include <iostream>
using namespace std;

int main() {
    int n = 1345;
    int res = 0;

    while(n > 0) {
        int lastdig = n % 10;
        res = res * 10 + lastdig;
        n /= 10;
    } 
    cout << "reverse = " << res << endl;
    return 0;
    }