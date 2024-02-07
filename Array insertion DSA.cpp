#include<bits/stdc++.h>
using namespace std;

int main()
{
  int num[20]={5,9,13,15,17};
  int position,value,i;
  cout<<"Enter your Position: "<<endl;
  cin>>position;
  cout<<"Enter your value: "<<endl;
  cin>>value;
  for(i=5;i>=position-1;i--)
   {
     num[i+1]=num[i];
   }
  num[position-1]=value;
  cout<<"New numbers are:"<<endl;
   for(i=0;i<6;i=i+1)
    {
     cout<<num[i]<<endl;
    }
}
