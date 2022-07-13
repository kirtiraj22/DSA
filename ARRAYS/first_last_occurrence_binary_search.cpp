int firstOcc(vector<int>& arr,int size,int key){
  int begin = 0;
  int end = size - 1;
  int mid = begin + (end - begin)/2;
  int ans = -1;
  while(begin <= end){
    if(arr[mid] == key){
      ans = mid;
      end = mid - 1;
    }
    else if(key > arr[mid]){
      begin = mid + 1;
    }
    else{
      end = mid - 1;
    }
    mid = begin + (end - begin)/2;
  }
  return ans;
}

int lastOcc(vector<int>& arr,int size,int key){
  int begin = 0;
  int end = size - 1;
  int ans = -1;
  int mid = begin + (end - begin)/2;
  while(begin <= end){
    if(arr[mid] == key){
      ans = mid;
      begin = mid + 1;
    }
    else if(key < arr[mid]){
      end = mid - 1;
    }
    else{
      begin = mid + 1;
    }
    mid = begin + (end - begin)/2;
    }
    return ans;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair <int,int> p;
    p.first = firstOcc(arr,n,k);
    p.second = lastOcc(arr,n,k);
    return p;
}


/*
we are supposed to find the first and last occurence of a number in a vector
suppose the vector is 1,2,3,3,5 so the first and last occurence of the number 3 is 
is at index 2 and 3 respectively.
so we made two functions for first and last occurence and store the result in 
a pair named as p 
at line 9 end = mid - 1; means if we get the number then we will check if 
another occurence of that number is present in left side or not
similarly at line 30  begin = mid + 1; means we are checking another occurrence
in right side 
as we need to find the first and last occurence
*/
