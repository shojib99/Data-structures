#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num[20]={1,2,3,4,5,6,7,8,9,10};
    int p;
    cout<<"Enter search number :";
    cin>>p;
    int flag=0;
    int i;
    for(i=0;i<15;i++)
    {
        if(num[i]==p)
        {
            flag=1;
            break;
        }
    }
    if (flag==1);
    {
        cout<<" The number is found";

    }
    else
        {
        cout<<" The number is not found";
    }


    return 0;
}
