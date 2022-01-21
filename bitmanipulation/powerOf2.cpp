/**
 * @file powerOf2.cpp
 * @author Muskan
 * @date 2022-01-21
 */

#include <iostream>
using namespace std;

/* 
    1) The number one less than a number will get all the bits flipped which are right to the least significant set bit 
    E.g.-- 110(6) -> 101(5) , 100(4)->011(3), 1010(10)->1001(9)

    2) & of a number and a number one less than that will unset the least significant set bit 
    E.g.-- 110(6) & 101(5) = 100 

    3) & of power of 2 and a number one less than that is always 0. 
    E.g. 8 = 1000 and 7 = 0111
    8 & 7 = 1000 & 0111 = 0 
*/

bool powerOf2(int n){ //check if the number is power of 2
    return (!(n & n-1));
}

int numberOf1s(int n){//counting the number of set bit
    int count = 0;
    while(n){ //According to point 2, every time we & a number n with n-1, the least significant set bit beomes unset finally gives 0 after certain iteration
        n = n&(n-1);
        count++;
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    //cout << powerOf2(n);
    cout << numberOf1s(n);
}