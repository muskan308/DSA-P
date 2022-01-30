#include <iostream>

using namespace std;

void towerOfHannoi(int n, char src, char dest, char help){
    if(n==0){
        return;
    }

    towerOfHannoi(n-1, src, help, dest);
    cout << "Move from "<<src<<" to "<<dest<<"\n";
    towerOfHannoi(n-1, help, dest, src);
}
int main(){
    towerOfHannoi(3, 'A', 'B', 'C');
    return 0;
}