#include <iostream>

using namespace std;

int boardGame(int start, int end){
    if(start == end){ //0 1 2 3
        return 1;
    }
    if(start > end) return 0;
    int count = 0;
    for(int i = 1 ; i <= 6 ; i++){
        count += boardGame(start+i, end);
    }
    return count;
}

int main(){
    cout << boardGame(0,3);
    return 0;
}

