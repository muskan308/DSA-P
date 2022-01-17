/**
 * @file MaxFrequency.cpp
 * @author Muskan
 * @brief from the characters of the given string, output the character with maximum frequency
 * @date 2022-01-17
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string ss;
    cin >> ss;
    vector<int> arr(26, 0); //array to keep the frequencies of all alphabets
    int max1 = 0;
    string maxs;
    transform(ss.begin(), ss.end(), ss.begin(), ::tolower); 
    for(int i = 0; i < ss.length() ; i++){
        arr[ss[i]-97]++;
        if(max1 < arr[ss[i]-97]){  //updating maximum frequency and the character
            max1 = arr[ss[i]-97];
            maxs = ss[i];
        }
    
    }
    cout << max1 <<" " << maxs;
    return 0;
}