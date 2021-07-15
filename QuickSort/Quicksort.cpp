#include<iostream>
#include"QuickSort.h"
using namespace std;

void QuickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int part = PartitionRight(arr, low, high);
		QuickSort(arr, low, part - 1);
		QuickSort(arr, part+1,high);
	}
	


}





int	PartitionRight(int arr[], int low, int high)
{
	//pick the right most num as pivot location in the array 
	int pivot = arr[high];
	int i =(low - 1);


	for (int j = low; j < high; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			Swapping(&arr[i], &arr[j]);
		}
	}
	Swapping(&arr[i + 1], &arr[high]);
	return(i + 1);

}

void PrintArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i]<<" ";
	}

}
void Swapping(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;


}