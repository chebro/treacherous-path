#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void Insert(Node*& head, int data, int n){
    Node* temp1 = new Node();
    (*temp1).data = data;
    (*temp1).next = NULL;
    if(n == 1) {
        (*temp1).next = head;
        head = temp1;
        return;
    }
    Node* temp2 = head;
    for(int i = 1; i < n-1; i++) {
        temp2 = (*temp2).next;
    }
    (*temp1).next = (*temp2).next;
    (*temp2).next = temp1;
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
    Insert(head, 3, 1);
    Insert(head, 5, 1);
    Print(head);
    cout<<(*head).data;
}
