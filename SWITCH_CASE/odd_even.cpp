#include <iostream>

using namespace std;

//prints 1 in case of even
//prints 0 in case of odd

bool isEven(int a){
    if(a & 1){                  //if number is odd then it condition will be true 
        return 1;               
    }
    else 
        return 0;
}

int main(){
    int num;
    cin >> num;
    int ans = isEven(num);
    cout << ans;
}


//if answer is odd then it will return 1(false) else it will return 0(true) because we are checking even
//NOTE 7 & 1 = 0(true) so if statement will get executed and 1 will be returned to main
//8 & 1 = 1(false) so if will not be executed and else will be executed and 0 would be returned
