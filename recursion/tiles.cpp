#include <iostream>
using namespace std;

int tiles(int n){
    if(n <=1 ){
        return n;
    }
    return tiles(n-2) + tiles(n-1);
}
int main(){
    cout << tiles(4);
    return 0;
}