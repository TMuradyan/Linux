#include "sort.h"
#include "complex.h"

void sort(Complex* arr, int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		bool isSwaped = false;
		for (int j = 0; j < size - 1 - i; ++j)
		{
			if (arr[j + 1] < arr[j])
			{
				Complex temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				isSwaped = true;
			}
		}
		if (isSwaped == false)
			break;
	}
}
