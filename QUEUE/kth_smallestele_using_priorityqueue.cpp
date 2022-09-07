class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i = 0; i <= r ; i++){
            pq.push(arr[i]);
        }
        int i = 1, ans = 0;
        while(!pq.empty()){
            if(i == k){
                ans = pq.top();
                break;
            }
            i++;
            pq.pop();
        }
        return ans;
    }
};


/*
  Q)Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.
*/

/*
  approach: 
      we are inserting all the array element in priority queue 
      a normal priority queue stores element in decreasing order but we have used 
       priority_queue<int,vector<int>,greater<int>> pq; which stores elements in increasing order
       so while the priority queue is not empty we will check if i(initially 1) is equal to k
       if not we will increment i by 1 and remove the top most element in priority queue using pop() function
       
       now if i == k then we will store that element in answer and finally return the answer
*/
