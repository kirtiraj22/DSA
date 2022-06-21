 #include <iostream>

using namespace std;

int main(){
    int base,power;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter power: ";
    cin >> power;
    int ans = 1;

    for(int i = 0 ; i < power ; i++){
        ans = ans * base;
    }
    cout << "answer is " << ans;
}

/*output : 
Enter base: 2
Enter power: 4
answer is 16
*/
