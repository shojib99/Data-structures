#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

void printReverseOrder(ListNode* head)
 {
    stack<int> s;
    while (head != NULL)
    {
        s.push(head->val);
        head = head->next;
    }

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
     cout << endl;
}

void printOriginalList(ListNode* head)
{
    while (head != NULL)
    {
     cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    ListNode* head = NULL;
    int value;
    cin >> value;
    while (value != -1)
        {
        ListNode* newNode = new ListNode(value);
        if (head == NULL)
        {
            head = newNode;
        } else
        {
            ListNode* temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
         cin >> value;
    }

    printReverseOrder(head);

    printOriginalList(head);

    while (head != NULL)
        {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
