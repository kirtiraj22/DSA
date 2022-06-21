 #include <iostream>

using namespace std;

int answer(int base,int power){            //making a function to find power
    int ans = 1;
    for(int i = 0 ; i < power ; i++){
        ans = ans * base;
    }
    return ans;
}

int main(){
    int base,power;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter power: ";
    cin >> power;
   
    cout << "answer is " << answer(base,power);
    return 0;
}

/*output : 
Enter base: 2
Enter power: 4
answer is 16
*/
