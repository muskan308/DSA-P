/**
 * @file first.cpp
 * @author Muskan
 * @date 2022-01-21 
 */

#include <iostream>
using namespace std;

int checkBit(int n, int index){ // 5(101), 1
    int mask = 1 << index; // 001 --> 010(after left shift by 1)
    return ((n & mask) != 0); //101 & 010 returns 0 means 0 is present at given index
}

int setBit(int n, int index){// 5(101), 1 -->set index 1
    int mask = 1 << index; // 001 << 1 --> 010
    return (n | mask);//returns 7(111)
}

int unsetBit(int n, int index){ // 5(101), 2 -->unset the index 2
    int mask = 1 << index; //001 << 2 --> 100
    mask = ~mask; // 1's compliment of mask (100 --> 011)
    return (n & mask); //returns 001 --> unsetting the 2nd index
}

int updateBit(int n, int index, int value){ // 5(101), 2 -->update 2nd index to value
    int mask = 1 << index;//001 --> 100
    mask = ~mask; //011
    n = n & mask; //101 & 011 --> 001
    return (n | (value << index));


}
int main(){
    int n, index;
    cin >> n>> index;
    //cout << checkBit(n ,index);
    //cout << setBit(n, index);
    //cout << unsetBit(n, index);
    int value;
    cin >> value;
    cout << updateBit(n, index, value);
    return 0;
}