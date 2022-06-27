#include <iostream>

using namespace std;


*/

//Question 2)Find unique in array
/*
given array of size n where n is equal to [2M + 1]
in given array M numbers are present twice and one number is present only once

find and return that number which is unique in array.
eg:
input : 2 3 1 6 3 6 2
output : 1
*/

int XORapproach(int arr[],int size){
    int result = 0;
    for(int i = 0;i < size;i++){
        result = result ^ arr[i];
    }
    return result;
}

int main(){
    int arr[100],size;
    cin >> size;
    for(int i = 0;i < size; i++){
        cin >> arr[i];
    }
    int ans = XORapproach(arr,size);
    cout << ans;
}

/*
=>XOR of any number with itself is zero. i.e n ^ n = 0   
For Example, Binary of 5 is   (1 0 1)

5 XOR 5 =   101 
          ^ 101
          -------
            000
            
=>XOR is Commutative  i.e  x^y = y^x
For Example,  2 ^ 3 = 3 ^ 2

given array = 1 3 3 2 4 5 6 5 6 1 2

So for XOR of all the element of our array is ,
= 1^3^3^2^4^5^6^5^6^1^2
= (1^1)^(2^2)^(3^3)^4^(5^5)^(6^6)
= 0^0^0^4^0^0
= 0^4
= 4 
so unique is 4
*/
