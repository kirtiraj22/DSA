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
