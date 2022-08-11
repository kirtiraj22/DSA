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
