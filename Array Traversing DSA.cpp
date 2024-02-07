#include<bits/stdc++.h>
using namespace std;

void sArray(int* arr, int n)
{
 int i;
 cout << "Array: ";
 for (i = 0; i < n;i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
 int t;
 cin >>t;
 int arr[t];
 for(int i=0;i<t;i++)
  {
    cin >> arr[i];
  }
  int n = sizeof(arr) / sizeof(arr[0]);
  sArray(arr, n);
  
  return 0;
}
