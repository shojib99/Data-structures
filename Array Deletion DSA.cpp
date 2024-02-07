#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[50]={20,30,35,40,45};
  int position,i;
  cout<<"Enter position: "<<endl;
  cin>>position;
   for(i=position-1;i<5;i=i+1)
    {
      arr[i]=arr[i+1];
    }
    cout<<"New numbers are:"<<endl;
    for(i=0;i<4;i=i+1)
    {
     cout<<arr[i]<<endl;
    }
}
