#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={20,30,50,60,70};
    int i,check;
    cout<<"Enter your search number: ";
    cin >>check;
    for(i=0; i<5; i++)
    {
        if(check==arr[i])
        {
            cout<<"Number is :"<<i+1;
        }
    }

    return 0;
}
