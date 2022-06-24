//QUESTION 1) swap alternative
// input : {1,2,3,4,5,6}
// output : {2,1,4,3,6,5}

int swapAlternative(int arr[],int size){
    for(int i=0; i < size; i+=2){
        //this condition will check whether the current 
        //index less than size or not to avoid swapping 
        //of last element in odd array with a garbage value
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int printArray(int arr[],int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }    
}

int main(){
    int size;
    cout << "Enter size : ";
    cin >> size;
    int arr[100];
    cout << "Enter array elements : ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }    
    swapAlternative(arr,size);
    cout << "After swapping elements : ";
    printArray(arr,size);
}

/*OUTPUT:
Enter size : 5
Enter array elements : 1 2 3 4 5
After swapping elements : 2 1 4 3 5 
*/
