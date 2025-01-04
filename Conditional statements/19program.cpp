#include <iostream>
using namespace std;

int main() {

 //sum of first n natural number
 
    int n;
    cout << "enter your n : ";
    cin >> n;

    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum += i;
    }
    cout << "sum = " << sum << endl;

    return 0;
}