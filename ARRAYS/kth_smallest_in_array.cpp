class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        
        sort(arr,arr + r + 1);
        return arr[k - 1];
    }
};


/*
 Q)Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.
*/

/*approach :
  to find the kth smallest number, we first sort the array using sort() algorithm
  and then return the (k-1)th element of the array as array index starts from 1
 
  TIME COMPLEXITY : O(nlogn)
*/
