#include<iostream>
#include"QuickSort.h"
using namespace std;

int main()
{
	int arr[] = { 10, 7, 8, 9, 1, 5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	QuickSort(arr, 0, size-1);
	PrintArr(arr, size);
	system("PAUSE");
}