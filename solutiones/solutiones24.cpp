 void deleteNode(Node *prevNode) {
        Node *delNode = prevNode->next;
        prevNode->next = prevNode->next->next;
        delete(delNode);
        return;
    }
    
    Node* reverse (Node* head, Node* prev) {
        //base case
        if(head == NULL)
            return prev;
            
        Node *tmp = reverse(head->next, head);
        head->next = prev;
        return tmp;
    }
    
    Node *compute(Node *head)
    {
        head = reverse(head, NULL);
        Node *tmp = head;
        
        while(tmp->next != NULL) {
            if(tmp->next->data < tmp->data)
                deleteNode(tmp);
            else
                tmp = tmp->next;
        }
        
        head = reverse(head, NULL);
        return head;
    }