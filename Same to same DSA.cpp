#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) :val(x),next(NULL) {}
};

bool areListsEqual(ListNode* head1, ListNode* head2)
{
    while (head1 != NULL && head2 != NULL)
        {
        if (head1->val != head2->val)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    return (head1 == NULL && head2 == NULL);
}

int main(){
    
    ListNode* head1 = NULL;
    int value;
    cin >> value;
    while (value != -1)
        {
        ListNode* newNode = new ListNode(value);
        if (head1 == NULL)
        {
            head1 = newNode;
        } else
        {
            ListNode* temp = head1;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin >> value;
    }

    ListNode* head2 = NULL;
    cin >> value;
    while (value != -1)
        {
        ListNode* newNode = new ListNode(value);
        if (head2 == NULL)
        {
            head2 = newNode;
        } else
        {
            ListNode* temp = head2;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin >> value;
    }


    if (areListsEqual(head1,head2))
        {
        cout << "YES" << endl;
    } else
    {
        cout << "NO" << endl;
    }


    while (head1 != NULL)
        {
        ListNode* temp = head1;
        head1 = head1->next;
        delete temp;
    }
       while (head2 != NULL)
        {
        ListNode* temp = head2;
        head2 = head2->next;
        delete temp;
        }
}
