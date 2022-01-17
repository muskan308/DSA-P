/**
 * @file CovertToMax.cpp
 * @author Muskan
 * @brief Converts the given string number into maximum possible number that can be made by rearranging the numbers
 * @date 2022-01-17
 */

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string ss;
    cin >> ss;
    sort(ss.begin(), ss.end(), greater<int>());//sorting the digits in descending order to get max number
    cout << ss;
    return 0;
}
