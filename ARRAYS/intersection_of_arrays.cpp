//find intersection of two arrays
//array intersection means common elements of an array
#include <iostream>
#include <vector>
using namespace std;

/*
Question 4) array intersection
input : array1 = {1,2,3,4} and array2 = {2,4,6,8}
output : {2,4}

*/
//array intersection
/*eg:
array 1 : 1 2 2 2 3 4 
array 2 : 2 2 3 3 
output : 3 2 */

int ArrayIntersection(int arr1[],int arr2[]){
    vector<int> ans;
    int n = 6,m = 4;
    int i=0,j=0;
    while(i < n && j < m){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}

int main(){
    int arr1[6] = {1,2,2,2,3,4};
    int arr2[4] = {2,2,3,3};
    ArrayIntersection(arr1,arr2);
}

