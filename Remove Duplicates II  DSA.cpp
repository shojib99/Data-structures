#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int>linkedList;
    int val;

    while (true)
    {
        cin >>val;
        if (val == -1)
            break;
        linkedList.push_back(val);
    }

    set<int> uniqueValues(linkedList.begin(),linkedList.end());
    for (int val : uniqueValues)
    {
        cout << val << " ";
    }
    cout << endl;

}
