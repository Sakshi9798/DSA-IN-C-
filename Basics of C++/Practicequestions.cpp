#include <iostream>
using namespace std;

int main() {

    int x = 2, y = 5;
    int exp1 = (x * y / x) ; //5
    int exp2 = (x * (static_cast<float>(y) / x));//5
    cout << exp1 << ",";
    cout << exp2 << "\n";
    
}