 #include <iostream>
 using namespace std;

 int main() {

    int age;
    cout << "enter your age : ";
    cin >> age;


    if(age >= 18) {
        cout << "can vote " << endl;
    } else {
        cout <<"can't vote" << endl;
    }
    return 0;
 }