#include<iostream>

using namespace std;
// Type declaration of the Node
struct Node {
    int data; // Two fields because Linked list consists of data and the next
             // next pointer
    Node *next;
};

void Traverse(Node * head) {
    while(head!=NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node *head = new Node();
    head->data = 2;
    head->next = new Node();
    head->next->data = 3;
    head->next->next = new Node();
    head->next->next->data = 4;
    head->next->next->next = NULL;
    Traverse(head);
}