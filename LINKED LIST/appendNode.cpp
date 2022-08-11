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
