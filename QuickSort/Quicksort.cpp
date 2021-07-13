#include<iostream>
#include"QuickSort.h"
using namespace std;

//void QuickSort(int arr[], int low, int high)
//{
//	if (low < high)
//	{
//		int part = PartitionRight(arr, low, high);
//		QuickSort(arr, low, part - 1);
//		QuickSort(arr, part+1,high);
//	}
//	
//

//}
void QuickSortMid(int arr[], int low, int high,int size)
{
	int pivot = arr[(low + high / 2)];
	//check if all the nums left of pivot are smaller, 
	//check all the nums right of pivot are larger
	int L = low;
	int H = high;
	//find element greater then pivot from the left
	while (L <= H)
	{
		while (arr[L] < pivot)
		{
			L++;
		}
		//find element less then pivot from the right
		while (pivot < arr[H])
		{
			H--;
		}
		if (L <= H)
		{
			Swapping(&arr[L], &arr[H]);
			L++;
			H--;
		}

	}
	if (L < high)
	{
		QuickSortMid(arr, L, high, size);
	}
	if (low < H)
	{
		QuickSortMid(arr, low, H,size);
	}



}




//int	PartitionRight(int arr[], int low, int high)
//{
//	//pick the right most num as pivot location in the array 
//	/*int pivot = arr[high];
//	int i =(low - 1);
//
//
//	for (int j = low; j < high; j++)
//	{
//		if (arr[j] <= pivot)
//		{
//			i++;
//			Swapping(&arr[i], &arr[j]);
//		}
//	}
//	Swapping(&arr[i + 1], &arr[high]);
//	return(i + 1);*/
//
//}

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