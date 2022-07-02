//sort the array in ones and zeros
#include <iostream>

using namespace std;

int PrintArray(int arr[],int size){
  for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
}

int SortOne(int arr[],int size){
  int left = 0,right = size-1;
  while(left < right){
    if(arr[left] == 0){
      left++;
    }
    else if(arr[right] == 1){
      right--;
    }
    else{
      swap(arr[left],arr[right]);
    }
  }
}

int main(){
  int size,arr[100];
  cin >> size;
  for(int i = 0; i < size; i++){
    cin >> arr[i];
  }
  SortOne(arr,size);
  PrintArray(arr,size);
}





/*INPUT :
5 
1 0 1 0 1

OUTPUT:
0 0 1 1 1*/
