#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >>arr[i];

    }

    int left =0;
    int right =n-1;
    int val = -1;
    int srch;
    int indx;

    cout << "Enter number search :";
    cin >> srch;
    while(left <= right)
    {
        int mid =(left + right)/2;
        if(arr[mid]==srch)
        {
            val = srch;
            break;
        }

        else if(arr[mid]<srch)
        {
            left= mid+1;

        }

        else
        {
            right= mid-1;
        }
    }

    if(val!= 1)
    {
        for(int i=0; i<n; i++)
        {
            if(val==arr[i])
            {
                indx =i;
                break;
            }
        }
    }

    cout <<indx;


}
