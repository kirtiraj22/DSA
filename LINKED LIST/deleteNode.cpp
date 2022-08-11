
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
