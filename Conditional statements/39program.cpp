#include <iostream>
using namespace std;

int main() {
    // print N fibonacci numbers

    int n = 19;
    int first = 0, sec = 1;
    cout << first << " " << sec << " ";

    for(int i=2; i<n; i++) {
        int third = first + sec;
        cout << third << " ";
        first = sec;
        sec = third;
    }
    cout << "\n";
    return 0;
}