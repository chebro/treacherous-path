#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void Insert(Node*& head, int data, int n){
    Node* insrt = new Node();
    (*insrt).data = data;
    (*insrt).next = NULL;
    if(n == 1) {
        (*insrt).next = head;
        head = insrt;
        return;
    }
    Node* pos = head;
    for(int i = 1; i < n-1; i++) {
        pos = (*pos).next;
    }
    (*insrt).next = (*pos).next;
    (*pos).next = insrt;
}

void Print(Node*& head){
    Node* temp = head;
    cout<<"List: ";
    while(temp != NULL){
        cout<<(*temp).data;
        temp = (*temp).next;
    }
    cout<<"\n";
}

int main() {
    Node* head;
    head = NULL;
    Insert(head, 2, 1);
    Print(head);
    Insert(head, 3, 1);
    Print(head);
    Insert(head, 5, 1);
    Print(head);
}
