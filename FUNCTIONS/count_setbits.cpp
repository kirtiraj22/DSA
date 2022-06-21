#include <iostream>

using namespace std;

//given two numbers
//output the total number of set bits(1) in a and b
//NOTE set bits means the total number of 1 in a number
//eg a = 2 (10)
//b = 3 (11)
//total number of 1's = 3
//so output should be 3

int setbit(int n){
    int count = 0;
    while(n!=0){
        if(n & 1)                   //this will give last element of the binary number 
            count++;                //if that will be 1 then count will be incremented
        n = n >> 1;                 //then we right shift by one
    }
    return count;
}
int total(int a,int b){
    int total = setbit(a) + setbit(b);
    return total;
}

int main(){
    int num1,num2;
    cout << "Enter a number ";
    cin >> num1 >> num2;
    cout << "the total number of set bits are : " << total(num1,num2);
    return 0;
}
