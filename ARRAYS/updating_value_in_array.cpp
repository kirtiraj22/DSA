#include <iostream>

using namespace std;

int updateArray(int x[]){
    x[0] = 120;
}

int updateVariable(int x){
    x = 20;
}

int main(){
    int x[5] = {1,2,3,4,5};
    int num = 5;

    cout << "before updating array values are : ";
    for(int i = 0; i < 5; i++){
        cout << x[i] << " ";
    }
    cout << endl;
    cout << "before updating variable, num = " << num << endl;
    updateVariable(num);
    updateArray(x);

    
    cout << "after updating array values are : ";
    for(int i = 0; i < 5; i++){
        cout << x[i] << " ";
    }
    cout << endl;

    
    cout << "after updating variable,num = " << num << endl;
}

/*OUTPUT
before updating array values are : 1 2 3 4 5 
before updating variable, num = 5
after updating array values are : 120 2 3 4 5
after updating variable,num = 5

*/


/*NOTE : when we update a variable in a function 
         and then print the variable in main then it remains same*/

/*BUT when we update an array in function and then print it,
    the values get updated in main */

/*REASON : when we call a function with an array name,a pointer to the first
element in the array is passed to the function so the changes made in the 
function will change the entire array of the main function*/
