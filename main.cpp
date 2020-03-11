#include <bits/stdc++.h>
using namespace std;

void swapped(int *firstNum, int *secondNum)
{
	int temp = *firstNum;
	*firstNum = *secondNum;
	*secondNum = temp;
}

void bubbleSort(int arr[], int n)
{
	int a, b;
	for (a = 0; a < n-1; a++)

	for (b = 0; b < n-a-1; b++)
		if (arr[b] > arr[b+1])
			swap(arr[b], arr[b+1]);
}


void printArray(int arr[], int size)
{
	int a;
	for (a = 0; a < size; a++)
		cout << arr[a] << " ";
	cout << endl;
}


int main()
{
	int arr[] = {54, 66, 35, 13, 25, 11, 80};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);
	cout<<"Sorted array: \n";
	printArray(arr, n);
	return 0;
}


