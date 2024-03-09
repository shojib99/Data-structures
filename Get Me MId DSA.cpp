#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) :val(x),next(NULL) {}
};

void printMiddleElements(ListNode* head)
{
    vector<int> values;

    while (head != NULL)
    {
        values.push_back(head->val);
        head = head->next;
    }

    sort(values.rbegin(), values.rend());

    int size = values.size();
    if (size % 2 == 1)
    {

      cout << values[size / 2] << endl;
    } else
    {

        cout << values[size / 2 - 1] << " " << values[size / 2] << endl;
    }
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

    printMiddleElements(head);
    while (head != NULL)
        {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
