/**
 * @file stringFuctions.cpp
 * @author Muskan
 * @date 2022-01-14
 */

//Different ways to initialize a string
#include <iostream>
#include <string>
using namespace std;

int main(){
    string ss;
    cin>> ss; //input from user for single word
    cout << ss <<"\n";

    int size = 5; //declaring the size of string
    string stringSame(size, 'm'); //string containing 5 'm'
    cout << stringSame<<"\n";

    fflush(stdin);//clearing buffer
    string stringSentence;
    getline(cin, stringSentence); //taking input for sentences
    cout << stringSentence <<"\n";
    return 0;
}