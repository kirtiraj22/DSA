#include <iostream>

using namespace std;

//prints 1 in case of even
//prints 0 in case of odd

bool isEven(int a){
    if(a & 1){                  //if number is odd then it condition will be true 
        return 0;               
    }
    else 
        return 1;
}

int main(){
    int num;
    cin >> num;
    if(isEven(num)){            //FALSE means any number other than 0 so if it gets 1 then condition is false
        cout << "Number is even" << endl;
    }
    else{
        cout << "Number is odd" << endl;
    }
    return 0;
}


//if answer is odd then it will return 0 else it will return 1 
//NOTE 7 & 1 = 0(true) so if statement will get executed and 0 will be returned to main
//8 & 1 = 1(false) so if will not be executed and else will be executed and 1 would be returned
