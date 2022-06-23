#include <iostream>

using namespace std;

//sum of all elements in array

int sumOfArray(int arr[],int size){
    int sum = 0;
    for(int i = 0; i < size;i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int size;
    cin >> size;
    int arr[100];
    for(int i = 0; i < size;i++){
        cin >> arr[i];
    }
    cout << "sum of the array is : " << sumOfArray(arr,size);
}

/*OUTPUT:
7
3 4 5 6 -10 -2 -1
sum of the array is : 5
*/
