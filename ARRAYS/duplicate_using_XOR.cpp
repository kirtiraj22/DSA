#include <iostream>

using namespace std;



/*Question 3) find duplicate in array
given that array has elements from 1 to n-1 and 
the nth element after n-1 is the duplicate one
eg if array size is 5 the elements will be
1 2 3 4 4(duplicate may differ)*/
/*we can use XOR here as we know that if we
XOR two same numbers then the answer is 0
and if we XOR any number with zero then we 
get the number itself
*/

int findDuplicate(int arr[],int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    for(int i = 1; i < size; i++){
        ans = ans ^ i;
    }
    return ans;
}
int main(){
    int size,arr[100];
    cin >> size;
    for(int i=0; i < size; i++){
        cin >> arr[i];
    }
    int ans = findDuplicate(arr,size);
    cout << ans;
}

/*
DRY RUN :
if arr = 1,2,3,4,4
ans = 1^2^3^4^4
again : ans = 1^2^3^4^4^1^2^3^4
					 = 1^1^2^2^3^3^4^4^4
					 = 0^0^0^0^4
					 = 4
 */

