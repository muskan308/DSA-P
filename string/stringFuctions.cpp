/**
 * @file stringFuctions.cpp
 * @author Muskan
 * @date 2022-01-14
 */

//Different functions with string
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    //append function
    string s1 = "fam", s2 = "ily";
    s1.append(s2); // to append the two strings and store in s1
    cout << s1 <<"\n";

    s1 = "fam";
    s1 = s2 + s1;//another approach to concatenate
    cout << s1 <<"\n";

    cout << s1+s2 <<"\n"; ///displaying without actually concatinating

    //clear function 
    s1.clear(); //function to clear the string
    cout << s1; // empty string

    //compare function
    if(!(s1.compare(s2)))//if s1 and s2 are same, returns zero
    {
        cout << "Equal strings\n";
    }else{
        cout << "Unequal strings\n";
    }

    //empty function
    if(s1.empty()){ //returns 1 if string is empty
        cout << "String is Empty\n";
    }

    //erase function
    string str = "Visual Studio Code";
    str.erase(3, 4); // starting from index 3, erases further 4 elements
    cout << str <<"\n";  //returns VisStudio Code

    //find function
    cout << str.find("Code")<<"\n"; //returns the index of first occurrenece of the substring mentioned

    //insert function
    str.insert(3, "ual "); //inserts ual in 3 index
    cout << str <<"\n";

    //substr function - getting substring from a string
    cout << str.substr(9, 4) <<"\n"; //returns the substring from index 9 to 4

    //sort function from algorithm header file
    sort(str.begin(), str.end()); 
    cout << str;
}