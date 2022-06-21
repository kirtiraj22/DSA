#include <iostream>

using namespace std;

int main(){
    int num1;
    int num2;
    char op;
    cin >> num1 >> num2 >> op;

    switch(op){
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
             cout << num1 / num2 << endl;
             break;
        case '%':
             cout << num1 % num2 << endl;
             break;
        default:
             cout << "Enter valid operator";
             break;
    }
   return 0;
}
