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
