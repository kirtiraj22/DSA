#include <iostream>

using namespace std;

//finding nCr
//NOTE : nCr = n!/((r!)*(n-r)!)
//so we need to find n! , r! and (n-r)!
//so we need to create a function that generates factorial of a number
//5! = 5*4*3*2*1
int Factorial(int num){
    int fact = 1;
    for(int i = 1 ; i <= num ; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n,int r){
     int numerator = Factorial(n);
     int denominator = Factorial(r) * Factorial(n-r);
     int ans = numerator / denominator;
     return ans;
}

int main(){
    int n,r;
    cin >> n >> r;
    cout << n << " C " << r << " = " << nCr(n,r);
    return 0;
}
