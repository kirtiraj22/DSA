//this program initialises all elements of array to 1

//to initialise array with any value, we use the fill_n command
#include <iostream>

using namespace std;

int main(){
   int arr[100];
   fill_n(arr,100,1);       //this will initialise all elements in array with one
   cout << arr[1];
   return 0;
}



//output :
//1
