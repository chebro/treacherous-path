#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void Insert(Node*& head, int data) {
    Node* insrt = new Node();
    insrt->data = data;
    insrt->next = head;
    head = insrt;
}

void Print(Node* head) {
    while(head != NULL){
        cout<<(*head).data;
        head = (*head).next;
    }
    cout<<"\n";
}

void Reverse(Node* head) {
    Node* temp = head;
    Node* temp2;
    int i = 0;
    while(temp != NULL) {
        temp2 = (*temp).next;
        (*temp).next = temp;
        cout<<(*head).data<<(*temp).data<<(*temp2).data;
        temp = temp2;
        cout<<"\n";
    }
    head = temp;
}

int main() {
    Node* head = NULL;
    Insert(head, 1);
    Insert(head, 2);
    Insert(head, 3);
    Print(head);
    Reverse(head);
    Print(head);
}