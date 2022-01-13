#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a; //pointer pointing to a variable
    cout << ptr <<"\n"<< *ptr<<"\n";
    *ptr = 23;//updates the value of a
    cout << a <<"\n";//prints updated value
    cout << ptr;//address remains same
    return 0;
}