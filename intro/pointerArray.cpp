/* --Relationship between and Array and pointer is that the array name points to the first element of the array
   --That's why arrays get modified when passed to function because the address is passed when the array name is passed.
*/
#include <iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30};
    int *ptr = arr;
    cout << *arr <<"\n"; //prints the first element
    cout << arr << " " << &arr[0] <<"\n"; //Both will be same 

    for(int i = 0; i < 3 ; i++){ //prints the array
        cout << *(arr+i)<<" ";//array name pointer cannot be incremented like ptr(it cannot be made to point another element)
    }

    cout << endl;
    //printing array using ptr 
    for(int i = 0 ; i < 3; i++ ){
        cout << *ptr <<" ";
        ptr++;//incrementing ptr to next address
    }
    return 0;
}