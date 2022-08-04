#include <iostream>

using namespace std;

class Stack{
    private:
        int top;
        int arr[5];
    public:
        Stack{
            top = -1;
            for(int i = 0; i < 5; i++){
                arr[i] = 0;
            }
        }

        bool isEmpty(){
            if(top == -1)
                return true;
            else
                return false;
        }

        bool isFull(){
            if(top == 4)
                return true;
            else
                return false;
        }

        void push(int val){
            if(isFull())
                cout << "Stack Overflow" << endl;
            else{
                top++;
                arr[top] = val;
            }
        }

        int pop(){
            if(isEmpty()){
                cout << "Stack underflow" << endl;
                return 0;
            }
            else{
                int popValue = arr[top];
                arr[top] = 0;
                top--;
                return popValue;
            }
        }

        int count(){
            return (top + 1);
        }

        int peek(in pos){
            if(isEmpty()){
                cout << "stack underflow" << endl;
                return 0;
            }
            else{
                return arr[pos];
            }
        }

        void change(int pos, int val){
            arr[pos] = val;
            cout << "value changed at position " << pos << endl;
        }
        void display(){
            cout << "elements in stack are : " << endl;
            for(int i = 4; i >= 0; i--){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main(){
    Stack s1;
    int position,option,value;

    do{
        cout << "select option number. or press 0 to EXIT" << endl;
        cout << "1.push()" << endl;
        cout << "2.pop()" << endl;
        cout << "3.isEmpty()" << endl;
        cout << "4.isFull()" << endl;
        cout << "5.peek()" << endl;
        cout << "6.count()" << endl;
        cout << "7.change()" << endl;
        cout << "8.display()" << endl;
        cout << "9.clear screen " << endl << endl;

        cin >> option;

        switch(option){
        case 1:
            cout << "enter item to push in stack " << endl;
            cin >> value;
            s1.push(value);
            break;
        case 2:
            cout << "poped value " << s1.pop() << endl;
            break;
        case 3:
            if(s1.empty())
                cout << "stack is empty" << endl;
            else
                cout <<"stack not empty" << endl;
            break;
        case 4:
            if(s1.isFull())
                cout << "stack is full" << endl;
            else
                cout << "Stack is empty" << endl;
            break;
        case 5:
            cout << "enter position to peek " << endl;
            cin >> position;
            cout << "peek function called " << endl << s1.peek(position) << endl;
            break;
        case 6:
            cout << "number of items in stack are " << s1.count() << endl;
            break;
        case 7:
            cout << "enter position to be changed ";
            cin >> position;
            cout << endl;
            cout << "enter value to be changed ";
            cin >> value;
            s1.change(position, value);
            break;
        case 8:
            cout << "display() called" << endl;
            s1.display();
            break;
        case 9:
            system("cls");
            break;
        default:
            cout << "enter proper option number " << endl;
        }
    }while(option != 0);

    return 0;
}
