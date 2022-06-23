#include <iostream>

using namespace std;

//REVERSE AN ARRAY

int Reverse(int arr[],int size){
    int start = 0;
    int end = size - 1;
    while(start <= end){
        int temp = 0;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        ++start;
        --end;
    }
}

int main(){
    int size;
    cout << "Enter size of array : " << endl;
    cin >> size;
    int arr[100];
    cout << "Enter elements of array : " << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << "Before reversing : "<< endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    Reverse(arr,size);
    cout << endl;
    cout << "After reversing : " << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

/*OUTPUT:

Enter size of array : 
5
Enter elements of array : 
1 2 3 4 5
Before reversing : 
1 2 3 4 5
After reversing :
5 4 3 2 1
*/
