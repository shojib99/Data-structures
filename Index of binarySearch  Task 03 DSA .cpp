#include <bits/stdc++.h>
using namespace std;


    int  binarySearch(int arr[], int l, int r)
    {
        if(l==r)
        {
            return l;
        }

        int mid =(l+r)/2;
        int leftMax= binarySearch(arr, l, mid);
        int rightMax= binarySearch(arr, mid+1, r);
        return arr[leftMax] > arr[rightMax] ? leftMax:rightMax;

    }

    int main()
    {
        int arr[]= {1,2,3,4,5,3};
        int n = sizeof(arr)/sizeof(arr[0]);
        int maxIndex= binarySearch(arr, 0, n-1);
        cout << "The index of the binarySearch: "<< maxIndex <<endl;

        return 0;

    }
