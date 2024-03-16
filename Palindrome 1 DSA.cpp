#include <bits/stdc++.h>
using namespace std;

struct ListNode 
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseList(ListNode* head)
{
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while (curr) 
    {
        ListNode* nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    return prev;
}

bool Palindrome(ListNode* head)
{
    if (!head || !head->next)
        return true;

    ListNode* slow = head;
    ListNode* fast = head;

    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    slow->next = reverseList(slow->next);
    slow = slow->next;

    while (slow) 
    {
        if (head->val != slow->val)
            return false;
        head = head->next;
        slow = slow->next;
    }

    return true;
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
    ListNode* head = nullptr;
    int val;

    while (true) 
    {
        cin >> val;
        if (val == -1)
            break;
        insertNode(head, val);
    }

    if (Palindrome(head))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}
