#include <iostream>

using namespace std;

class Queue{
    private:
        int front;
        int rear;
        int arr[5];
    public:
        Queue(){
            front = -1;
            rear = -1;
            for(int i = 0; i < 5; i++){
                arr[i] = 0;
            }
        }

        bool isEmpty(){
            if(rear == -1 && front == -1)
                return true;
            else
                return false;
        }

        bool isFull(){
            if(rear == 4)           //size of array - 1
                return true;
            else
                return false;
        }

        void Enqueue(int value){
            if(isFull()){
                cout << "queue is full cant enqueue" << endl;
                return;
            }
            else if(isEmpty()){
                rear = 0;
                front = 0;
                arr[rear] = value;
            }
            else{
                rear++;
                arr[rear] = value;
            }
        }

        int Dequeue(){
            int x;
            if(isEmpty()){
                cout << "cant dequeue as queue is empty" << endl;
                return 0;
            }
            else if(rear == front){
                x = arr[front];
                arr[front] = 0;
                rear = -1;
                front = -1;
                return x;
            }
            else{
                x = arr[front];
                arr[front] = 0;
                front++;
                return x;
            }
        }

        int count(){
            return (rear - front + 1);
        }

        void display(){
            for(int i = 0; i < 5; i++){
                cout << arr[i] << " ";
            }
        }
};

int main()
{
    Queue q1;
    int option,value;
    do{
        cout << "\nEnter your choice from 1 to 7 : " << endl;
        cout << "1.Enqueue()" << endl;
        cout << "2.Dequeue()" << endl;
        cout << "3.isEmpty()" << endl;
        cout << "4.isFull()" << endl;
        cout << "5.count()" << endl;
        cout << "6.display()" << endl;
        cout << "7.Clear screen" << endl << endl;

        cin >> option;

        switch(option){
            case 1:
                cin >> value;
                q1.Enqueue(value);
                break;
            case 2:
                cout << "value removed is : " << q1.Dequeue() << endl;
                break;
            case 3:
                if(q1.isEmpty()){
                    cout << "queue is empty \n";
                }
                else{
                    cout << "queue is not empty \n";
                }
                break;
            case 4:
                if(q1.isFull()){
                    cout << "queue is full \n";
                }
                else{
                    cout << "queue is not full \n";
                }
                break;
            case 5:
                cout << q1.count() << endl;
                break;
            case 6:
                q1.display();
                break;
            case 7:
                system("cls");
                break;
            default:
                cout << "select appropriate option" << endl;
        }
    }while(option != 0);
    return 0;
}
