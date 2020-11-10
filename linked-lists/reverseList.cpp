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

void Reverse(Node*& head) {
    Node* curr;
    Node* prev = NULL;
    Node* walk = head;
    while(walk != NULL) {
        curr = walk;
        walk = (*walk).next;
        (*curr).next = prev;
        prev = curr;
    }
    head = curr;
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