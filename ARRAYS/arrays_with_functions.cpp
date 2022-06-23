#include <iostream>

using namespace std;

//arrays with functions
void printArray(int arr[],int size){
    for(int i = 0; i < size;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n = 10;
    int arr[n] = {0};
    printArray(arr,n);        //passing an array and its size to the function  
}



//OUTPUT:
//0 0 0 0 0 0 0 0 0 0 
