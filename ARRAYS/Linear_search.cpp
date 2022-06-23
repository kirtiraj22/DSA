#include <iostream>

using namespace std;

//LINEAR SEARCH:

bool linearSearch(int arr[],int size,int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}
int main(){
    int size;
    cout << "Enter size of array : ";
    cin >> size;
    int arr[100];
    cout << "input elements in an array : ";
    for(int i = 0; i < size ;i++){
        cin >> arr[i];
    }
    int target;
    cout << "Enter element to be searched for : ";
    cin >> target;
    bool ans = linearSearch(arr,size,target);

    if(ans == true){
        cout << "Element found!!";
    }

    else{
        cout << "Element Not found";
    }
}

/*OUTPUT:

Enter size of array : 8
input elements in an array : 1 2 3 4 5 6 7 8
Enter element to be searched for : 7
Element found!!
*/
