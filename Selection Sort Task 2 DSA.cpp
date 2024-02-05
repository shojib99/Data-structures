#include<bits/stdc++.h>
using namespace std;

void selectionSort(int ar[], int n)
{
	int i,j, min_idx;

	for (i =0; i<n - 1; i++)
        {
		min_idx = i;
		for (j = i + 1; j< n; j++)
            {
			if (ar[j] < ar[min_idx])
				min_idx = j;
		}

		if (min_idx != i)
			swap(ar[min_idx], ar[i]);
	}
}

void printArray(int ar[], int size)
{
	int i;
	for (i =0; i<size; i++)
        {
		cout << ar[i] << " ";
		cout << endl;
	}
}

int main()
{
	int ar[] = { 34, 52, 10, 34, 15 };
	int n =sizeof(ar) / sizeof(ar[0]);

	selectionSort(ar, n);
	cout << "Sorted array: \n";
	printArray(ar, n);
	return 0;
}
