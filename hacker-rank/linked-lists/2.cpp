// Complete the deleteNode function below.

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode** indirect = &head;
    while ( position ) {
        indirect = &(*indirect) -> next;        
        position--;
    }
    (*indirect) = (*indirect) -> next;
    return head;
}

