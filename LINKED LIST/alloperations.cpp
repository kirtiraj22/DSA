#include <iostream>

using namespace std;

class Node{
public:
    int key;
    int data;
    Node* next;

    Node(){
        key = 0;
        data = 0;
        next = NULL;
    }
    Node(int k, int d){     //parameterized constructor
        key = k;
        data = d;
    }
};

class SinglyLinkedList{
public:
    Node* head;     //creating a pointer head of data type node
    SinglyLinkedList(){
        head = NULL;
    }
    SinglyLinkedList(Node* n){      //passing a pointer of data type node
        head = n;               //assigning the node n to the head i.e head will store same address as n
    }

//making functions for different operations :
//1)to check if node exists or not with the specified key

    Node* nodeExists(int k){        //the return type is a pointer
        Node* temp = NULL;          //creating a temporary pointer
        Node* ptr = head;           //assigning head node to the ptr variable
        while(ptr != NULL){         //traversing the linked list until ptr is not null
            if(ptr->key == k){       //checking if key of that current pointer is equal to the key passed in function
                temp = ptr;         //if it is true,then assign ptr to the temp
            }
            ptr = ptr->next;        //if condition is false, move to the next node
        }
        return temp;                //return temp(it can be either NULL or can have some value)
    }

    //2)appending a node to the list at the end

    void appendNode(Node* n){               //passing a node n
        if(nodeExists(n->key) != NULL){     //first check if node with the same key exists or not (if answer is null then it does not exist)
            cout << "Node with the key already exists!" << endl;
        }
        else{
            if(head == NULL){               //check if head is null i.e if any node exists or not
                head = n;                   //if node doesn't exist then assign node n as head
                cout << "Node appended !" << endl;
            }
            else{                           //this will run if nodes are present in the list
                Node* ptr = head;           //make a pointer of data type node and assign head to it and traverse the whole list
                while(ptr->next != NULL){   //traverse until the next part of the node is not equal to null
                    ptr = ptr->next;        //go to the next node
                }
                ptr->next = n;              //if we reach the null part, add a node there by assigning n's address to next of current node
                cout << "Node Appended!" << endl;
            }
        }
    }

//3)prepend a node node to the beginning of the list

    void prependNode(Node* n){
        if(nodeExists(n->key) != NULL){         //check if node with the key already exists
            cout << "node with the key already exists!" << endl;
        }
        else{                               //if node doesn't exists
            n->next = head;                 //assign head's address to the next of the given node(so that we can make the given node first)
            head = n;                       //assign node n as head
            cout << "node prepended!" << endl;
        }
    }

//4)insert a node in between the list

    void insertNodeAfter(int k, Node* n){        //pass a key and a node
        Node* ptr = nodeExists(k);          //assign an existing node with key k to a node ptr
        if(ptr == NULL){                    //if ptr is null this means no node with the key k exist in list
            cout << "No node with the given key value exists!" << endl;
        }
        else{
            if(nodeExists(n->key) != NULL){    //check if node with the key of new node n exists
                cout << "node with this key already exists!" << endl;
            }
            else{                           //if node with same key doesn't exists
                n->next = ptr->next;        //assign ptr's next to the next of new node n
                ptr->next = n;              //now change ptr's next to n
                cout << "Node Inserted!" << endl;
            }
        }
    }


//5)Delete a node by passing a key value

    void deleteNodeByKey(int k){            //passing a key
        if(head == NULL){                    //check if list is empty or not
            cout << "Linked list is empty, can't delete anything" << endl;
        }
        else if(head != NULL){              //if list is not empty
            if(head->key == k){             //check if head node's key is to be deleted
                head = head->next;          //simply change head to the next address
                cout << "node unlinked" << endl;
            }
            else{                           //if any other node is to be deleted
                Node* temp = NULL;          //declare a temporary node as null
                Node* prevptr = head;       //make a previous node pointing to head
                Node* currptr = head->next;     //make a current node pointing to next of head
                while(currptr != NULL){         //if current node is not null check
                    if((currptr->key) == k){      //if current node's key is to be deleted
                        temp = currptr;         //assign current node to temp
                        currptr = NULL;         //and make the current node null
                    }
                    else{                       //else move to the next node
                        prevptr = prevptr->next;
                        currptr = currptr->next;
                    }
                }
                if(temp != NULL){                   //if temp has some value then delete that node
                    prevptr->next = temp->next;     //make previous pointer's next equal to temp's next to unlink the current node
                    cout << "Node Unlinked!" << endl;
                }
                else{                               //if temp is null this means the node with specified key doesn't exist
                    cout << "Node with specified key doesn't exist!" << endl;
                }
            }
        }
    }

//6)update a node(update data) by key

    void updateNodeByKey(int k,int d){
        Node* ptr = nodeExists(k);
        if(ptr != NULL){
            ptr->data = d;
            cout << "Node updated successfully" << endl;
        }
        else{
            cout << "Node doesn't exists!" << endl;
        }
    }

//7) printing the list:

    void printList(){
        if(head == NULL){
            cout << "List is empty" << endl;
        }
        else{
            cout << endl << "singly linked list values : ";
            Node* temp = head;
            while(temp != NULL){
                cout << "(" << temp->key << "," << temp->data << ")-->";
                temp = temp->next;
            }
        }
    }
};

int main()
{
    SinglyLinkedList s;
    int option,key1,k1,data1;
    do{
        cout << endl << endl << "Select option. Enter 0 to exit" << endl;
        cout << "1. appendNode()" << endl;
        cout << "2.prependNode()" << endl;
        cout << "3.insertNode()" << endl;
        cout << "4.deleteNodeByKey()" << endl;
        cout << "5.updateNodeByKey()" << endl;
        cout << "6.print()" << endl;
        cout << "7.clear screen" << endl << endl;

        cin >> option;
        Node* n1 = new Node();

        switch(option){
        case 0:
            break;
        case 1:
            cout << "enter key and data to be appended" << endl;
            cin >> key1 >> data1;
            n1->key = key1;
            n1->data = data1;
            s.appendNode(n1);
            break;
        case 2:
            cout << "enter key and data to be prepended" << endl;
            cin >> key1 >> data1;
            n1->key = key1;
            n1->data = data1;
            s.prependNode(n1);
            break;
        case 3:
            cout << "enter key of existing node after which you want to insert this node" << endl;
            cin >> k1;
            cout << "enter key and data of new node" << endl;
            cin >> key1 >> data1;
            n1->key = key1;
            n1->data = data1;
            s.insertNodeAfter(k1,n1);
            break;
        case 4:
            cout << "enter key of node to be deleted" << endl;
            cin >> k1;
            s.deleteNodeByKey(k1);
            break;
        case 5:
            cout << "enter key and new data to be updated" << endl;
            cin >> key1 >> data1;
            s.updateNodeByKey(key1,data1);
            break;
        case 6:
            s.printList();
            break;
        case 7:
            system("cls");
            break;
        default:
            cout << "Enter proper option number" << endl;
        }
    }while(option != 0);
    return 0;
}
