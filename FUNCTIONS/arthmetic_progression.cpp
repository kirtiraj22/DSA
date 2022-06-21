#include <iostream>

using namespace std;

int arth_progression(int n){
    return (3*n + 7);
}

int main(){
    int num;
    cin >> num;
    cout << num << "th term of ap is : " << arth_progression(num);
    return 0;
}
