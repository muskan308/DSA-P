/**
 * @file upperOrlower.cpp
 * @author Muskan
 * @date 2022-01-14
 */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string str = "AhynbWms";
    //'a' - 'A' =  32


    for(int i = 0 ; i < str.length() ; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){ //converts lower to upper and upper remains as it is
            str[i] -= 32;
        }
    }
    cout << str <<"\n";
    
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){//converts upper to lower
            str[i] += 32;
        }
    }
    cout << str <<"\n";

    //inbuilt function to transform
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << "\n";
    return 0;
}