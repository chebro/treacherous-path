// Complete the insertNodeAtPosition function below.

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode *walk = head;
    SinglyLinkedListNode *temp = new SinglyLinkedListNode(data);
    
    while ( position - 1 ) {
        if ( walk == nullptr ) {
            walk -> data = data;
            walk -> next = nullptr;
            return head;
        }
        walk = walk -> next;
        position--;
    }
    
    temp -> next = walk -> next;
    walk -> next = temp;
    
    return head;
}

