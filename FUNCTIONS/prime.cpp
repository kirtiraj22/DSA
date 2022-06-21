#include <iostream>

using namespace std;

//1 means prime
//0 means not prime

bool checkPrime(int n){
    for(int i = 2;i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int num;
    cin >> num;
    if(checkPrime(num)){                //if condition is true that is if 1 is returned from the function than prime
        cout << "Number is prime";
    }
    else{
        cout << "Number is not prime";
    }
    return 0;
}
