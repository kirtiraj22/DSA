#include <iostream>

using namespace std;

int main(){
    int num1;
    int num2;
    char op;
    cout << "Enter number 1:" << endl;
    cin >> num1;
    cout << "Enter number 2:" << endl;
    cin >> num2;
    cout << "Enter an operator" << endl;
    cin >> op;
    

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
