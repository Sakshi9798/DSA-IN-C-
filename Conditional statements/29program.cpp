#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while(i <= 5) {
        if(i == 4) {
            break;
        }
    
        cout << i << endl;
        i++;
}
    cout << "out of loop now" << endl;
    return 0;
}