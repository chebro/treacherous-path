#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
};

void Insert(Node*& head, int data) {
    Node* temp = new Node();
    temp -> next = head;
    temp -> data = data;
    head = temp;
}

void Print(Node* head) {
    if(head == NULL) return;
    cout<<head -> data;
    Print(head -> next);
}

void Reverse(Node* walk, Node* prev, Node*& head) {
    Node* curr = walk;
    Node* temp;
    if(walk == NULL) {
        head = prev;
        return;
    }
    temp = walk;
    walk = temp -> next;
    temp -> next = prev;
    prev = curr;
    Reverse(walk, prev, head);
}

int main() {
    Node* head = NULL;
    Insert(head, 1);
    Insert(head, 2);
    Insert(head, 3);
    Print(head);
    cout<<"\n";
    Reverse(head, NULL, head);
    Print(head);
}
