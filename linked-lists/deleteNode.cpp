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

void Delete(Node*& head, int n) {
    Node* del = head;
    for(int i = 1; i < n; i++) {
        del = (*del).next;
    }
    Node** temp = &head;
    while((*temp) != del) {
        temp = &(*temp)->next;   
    }
    *temp = (*del).next;
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
    Insert(head, 3, 2);
    Print(head);
    Insert(head, 5, 3);
    Print(head);
    Delete(head, 1);
    Print(head);
    Delete(head, 1);
    Print(head);
    Delete(head, 1);
    Print(head);
}
