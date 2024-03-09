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

    LinkedList() : head(nullptr) {}
    void append(int value) 
    {
        Node* newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
        } else 
        {
            Node* current = head;
            while (current->next != nullptr) 
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }
};

void findMaxMin(LinkedList& linkedList) 
{
    if (linkedList.head == nullptr) {
        cout << "Empty linked list" << endl;
        return;
    }
    Node* current = linkedList.head;
    int maxVal = INT_MIN;
    int minVal = INT_MAX;

    while (current != nullptr) 
    {
        maxVal = max(maxVal, current->data);
        minVal = min(minVal, current->data);
        current = current->next;
    }

    cout << maxVal << " " << minVal << endl;
}

int main() 
{ 
    LinkedList linkedList;
    int value;
    while (true) 
    {
        cin >> value;
        if (value == -1) 
        {
            break;
        }
        linkedList.append(value);
    }
    findMaxMin(linkedList);

    return 0;
}
