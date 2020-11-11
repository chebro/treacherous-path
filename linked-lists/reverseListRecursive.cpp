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

void Reverse(Node* walk, Node*& head) {
    if(walk -> next == NULL) {
        head = walk;
        return;
    }
    Reverse(walk -> next, head);
    walk -> next -> next = walk;
    walk -> next = NULL;
}

int main() {
    Node* head = NULL;
    Insert(head, 1);
    Insert(head, 2);
    Insert(head, 3);
    Print(head);
    cout<<"\n";
    Reverse(head, head);
    Print(head);
}
