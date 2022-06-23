#include <iostream>
#include <limits.h>       //using limits.h to include int_max and int_min

using namespace std;

//minimum and maximum in array

int getmax(int arr[],int size){

    int max = INT_MIN;          //storing minimum value of integer to int max

    for(int i = 0; i < size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int getmin(int arr[],int size){

    int min = INT_MAX;         //storing maximum value in int min

    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}


int main(){
    int size;
    cin >> size;

    int arr[100];           /*instead of putting size variable inside arr
                            i.e arr[size] , use large number like arr[100]*/

    for(int i = 0; i < size ;i++){
        cin >> arr[i];
    }

    cout << "maximum is : " << getmax(arr,size) << endl;
    cout << "minimum is : " << getmin(arr,size) << endl;
    return 0; 
}


/*NOTE: instead of writing  
for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
 
 we can also write 
 maximum = MIN_INT;
 for(int i = 0; i < size; i++){
    maximum = max(maximum,arr[i]);
 }
 max(a,b) is a predifined function that can find maximum number from given two numbers a and b
 
 similarly for minimum we can write min(a,b);
 */
