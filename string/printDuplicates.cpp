/**
 * @file printDuplicates.cpp
 * @author Muskan
 * @brief Write an efficient program to print all the duplicates and their counts in the input string 
 * @date 2022-01-17
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    string ss;
    cin >> ss;
    char a;
    transform(ss.begin(), ss.end(), ss.begin(), ::tolower);
    vector<int> count(26, 0);//array to keep count of alphabets
    for(int i = 0 ;i < ss.length() ; i++){
        count[ss[i]-'a'] ++;
    }
    for(int i = 0 ;i < 26 ; i++){
        if(count[i] > 1){ //printing counts of only duplicate characters i.e greater than 1 arrivals
            a = i+'a';
            cout << a <<" - " << count[i]<<"\n";
        }
    }
    return 0;
}