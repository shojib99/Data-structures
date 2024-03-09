#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList 
{
public:
    Node* head;
    Node* tail;

    LinkedList() : head(nullptr), tail(nullptr) {}

    void insertAtHead(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }
    
    void insertAtTail(int value)
    {
        Node* newNode = new Node(value);
        if (tail == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    void printHeadTail()
    {
        cout << head->data << " " << tail->data << endl;
    }
};

int main()
{
    LinkedList linkedList;
    int Q, X, V;

    cin >> Q;
    for (int i = 0; i < Q; ++i) {
        cin >> X >> V;
        if (X == 0) {
            linkedList.insertAtHead(V);
        } else {
            linkedList.insertAtTail(V);
        }
        linkedList.printHeadTail();
    }
    return 0;
}
