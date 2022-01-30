#include <iostream>
using namespace std;

int pairsPossible(int n){
    if(n <=2 ){
        return n;
    }
    return (n-1)*pairsPossible(n-2) + pairsPossible(n-1);
}
int main(){
    cout << pairsPossible(4);
    return 0;
}