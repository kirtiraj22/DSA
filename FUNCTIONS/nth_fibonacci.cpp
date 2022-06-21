#include <iostream>

using namespace std;

//find nth fibonacci term

int fibonacci(int n){
    int first = 0;
    int second = 1;
    for(int i = 2; i < n; i++){
        int next = first + second;
        first = second;
        second = next;
    }
    return second;
}

int main(){
    int num;
    cin >> num;
    cout << fibonacci(num);
}
