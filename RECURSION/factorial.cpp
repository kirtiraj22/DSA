#include <bits/stdc++.h> 
 
using namespace std;
 
int ans(int n){
    if(n == 0)
        return 1;
    return n * ans(n - 1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << ans(n);
    return 0;
}
