#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* createNode(int data) {
    Node* temp = new Node();
    temp -> data = data;
    temp -> prev = NULL;
    temp -> next = NULL;
    return temp;
}

void InsertAtTail(Node*& head, int data) {
    Node* walk = head;
    Node* temp = createNode(data);
    if (walk == NULL) {
        temp -> prev = head;
        head = temp;
        return;
    }    
    while(walk -> next != NULL) {
        walk = walk -> next;
    }
    walk -> next = temp;
    temp -> prev = walk;
}

void Print(Node* walk) {
    if(walk == NULL) {
        return;
    }
    cout<<walk -> data;
    Print(walk -> next);
}
 
int main () {
    Node* head = NULL;
    InsertAtTail(head, 1);
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    Print(head);
}