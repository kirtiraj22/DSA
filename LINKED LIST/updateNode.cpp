
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
