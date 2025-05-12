#include <iostream>
using namespace std;
 
//factorial of a number n

int factorial(int n) {  // int factorial is name of function and int n means function takes an integer input
    
    int fact = 1; //int fact used to store the result 
    for(int i=1; i<=n; i++) {
    fact = fact * i;
}

cout << "factorial(" << n <<") =" << fact << endl;
return fact; 
}

int main() {
    factorial(0); // n is for input number for calculating factorial [if call factorial(0) then n will be 0]
    factorial(5);
    return 0;
}