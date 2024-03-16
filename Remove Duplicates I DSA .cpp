#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) :val(x), next(NULL) {}
};

ListNode* removeDuplicates(ListNode* head)
{
    if (!head)
        return NULL;

    unordered_set<int> uniqueValues;
    ListNode* current = head;
    ListNode* prev = NULL;

    while (current)
    {
        if (uniqueValues.find(current->val) == uniqueValues.end()) {
            uniqueValues.insert(current->val);
            prev = current;
            current = current->next;
        } else {
            prev->next = current->next;
            ListNode* temp = current;
            current = current->next;
            delete temp;
        }
    }

    return head;
}

ListNode* sortLinkedList(ListNode* head)
{
    if (!head || !head->next)
        return head;

    ListNode* sorted = NULL;
    ListNode* current = head;

    while (current)
    {
        ListNode* nextNode = current->next;
        if (sorted == NULL || sorted->val > current->val) {
            current->next = sorted;
            sorted = current;
        } else {
            ListNode* search = sorted;
            while (search->next && search->next->val < current->val)
                search = search->next;
            current->next = search->next;
            search->next = current;
        }
        current = nextNode;
    }

    return sorted;
}

void printLinkedList(ListNode* head)
{
    ListNode* current = head;
    while (current) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

void insertNode(ListNode*& head, int val)
{
    if (!head) {
        head = new ListNode(val);
        return;
    }
    ListNode* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = new ListNode(val);
}

int main()
{
    ListNode* head = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1)
            break;
        insertNode(head, val);
    }


    head = removeDuplicates(head);

    head = sortLinkedList(head);

    printLinkedList(head);

}
