#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool Palindrome(ListNode* head)
{
    vector<int> values;
    ListNode* current = head;

    while (current)
    {
        values.push_back(current->val);
        current = current->next;
    }

    int left = 0, right = values.size() - 1;

    while (left < right) {
        if (values[left] != values[right])
            return false;
        left++;
        right--;
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
    ListNode* head = NULL;
    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insertNode(head, val);
    }

    if ( Palindrome(head))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}

