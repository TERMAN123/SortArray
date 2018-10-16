#include "pch.h"
#include <iostream>

void sortArray(int array[], int size)
{
	int it = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] == 0)
		{
			int temp = array[i-it];
			array[i-it] = array[i];
			array[i] = temp;
		}
		else 
		{
			it++;
		}
	}
}

int main()
{
	const int size = 10;
	int arr[size] = { 1,1,0,1,0,1,0,0,1,0 };
	sortArray(arr, size);
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i];
	}
}