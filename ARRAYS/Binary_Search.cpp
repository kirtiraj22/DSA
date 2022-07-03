#include <iostream>
#include <algorithm>
using namespace std;

int PrintArray(int arr[],int size){
  for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

//eg : 2 , 4 , 5 , 6 , 8
int BinarySearch(int arr[],int size,int target){
  int start = 0;
  int end = size-1;

  while(start <= end){  
    int middle = start + ((end - start) / 2);
    if(arr[middle] == target){
      return middle;
    }
    else if(arr[middle] < target){
      start = middle+1;
    }
    else{
      end = middle - 1;
    }
  }
  return -1;
}

int main(){
  int size,arr[100],target;
  cin >> size;
  for(int i = 0; i < size; i++){
    cin >> arr[i];
  }
  cin >> target;
  sort(arr,arr+size);
  cout << "sorted array is : " << endl;
  PrintArray(arr,size);
  int ans = BinarySearch(arr,size,target);
  cout << "element found at index " << ans;
  return 0;
}


//TIME COMPLEXITY : O(log n)

/*NOTE : In line number 18 we have used start + ((end - start)/2) INSTEAD of (start + end)/2
This is because if out start = 2^31 - 1 and end = 2^31 -1 then the result of start + end will 
get overflowed.
so to avoid it we use start  + ((end - start)/2)
so   middle = start + ((end - start)/2)
            = start + (end/2) - (start/2)
            = start - (start/2) + (end/2)
            = (2start - start)/2 + end/2
            = (start + end)/2
            
so atleast last we get the same thing but in more optimised manner
*/


/*
INPUT :
5
1 3 2 5 4
5
OUTPUT :
sorted array is : 
1 2 3 4 5
element found at : 4
*/
