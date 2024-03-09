#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;
    Node* Prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->Prev = NULL;
    }
};

void print_normal(Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node* tail)
{
    Node* tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->Prev;
    }
    cout << endl;
}

int main()
{
    Node* head = new Node(20);
    Node* a = new Node(30);
    Node* b = new Node(40);
    Node* tail = b;

    head->next = a;
    a->Prev = head;
    a->next = b;
    b->Prev = a;

    print_normal(head);
    print_reverse(tail);

    return 0;
};
