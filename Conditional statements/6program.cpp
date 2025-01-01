#include <iostream>
using namespace std;

int main() {
// income t calculator

int income;
float tax;
cout << "enter income (in lakhs) : ";
cin >> income;

if(income < 5){
     //0%
     tax = 0;
}else if(income <= 10){
    tax = 0.2 * income;
    //20%
}else{
    tax = 0.3 * income;
    //30%
}
cout << "Tax = " << (tax * 100000) << endl;
return 0;
}