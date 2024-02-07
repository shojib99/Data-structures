#include<bits/stdc++.h>
using namespace std;

int main()
 {
   int arr[5];
   int i;
   int result=0;
   cout<<"Enter 5 number: ";
   for(i=0;i<5;i++)
    {
     cin>>arr[i];
    }
    for(i=0;i<5;i++)
     {
       result+=arr[i];
     }

   cout<<"Addition is:"<<result;
 }
