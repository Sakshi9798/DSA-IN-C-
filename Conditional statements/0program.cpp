#include <iostream>
using namespace std;

int main() {

    bool isAdult;
    int age;
    cout << "enter age : ";
    cin >> age;

    isAdult=(age>=18 || age<=18) ? true : false;
    cout << "isAdult" << endl;
     
}