// Complete the reversePrint function below.

void reversePrint(SinglyLinkedListNode* head) {
    if ( head -> next == nullptr ) {
        cout<<head -> data<<endl;
        return;
    }
    reversePrint(head -> next);
    cout<<head -> data<<endl;
    head = head -> next;
}


