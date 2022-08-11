
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

