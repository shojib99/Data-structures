#include<bits/stdc++.h>
using namespace std;

void insertionSort(int ar[], int n)
{
	int i,j, shojib ;
	for (i = 1; i < n; i++)
        {
		shojib = ar[i];
		j = i - 1;

		while (j >= 0 && ar[j] >shojib)
            {
			ar[j + 1] = ar[j];
			j = j - 1;
		}
		ar[j + 1] =shojib;
	}
}

void printArray(int ar[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << ar[i] << " ";
	cout << endl;
}

int main()
{
	int ar[] = { 15, 36, 20, 64, 25 };
	int N = sizeof(ar) / sizeof(ar[0]);

	insertionSort(ar, N);
	printArray(ar, N);

	return 0;
}
