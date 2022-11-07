#include <bits/stdc++.h> 
 
using namespace std;
 
void ans(int i, int sum){
    if(i < 1){
        cout << sum << endl;
        return;
    }
    ans(i - 1, sum + i);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << ans(n);
    return 0;
}

/*
This is paramaterised method to find sum of n numbers using recursion
*/
