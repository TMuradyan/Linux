#include <iostream>
#include "sort.h"
#include "complex.h"

int main()
{
	Complex* arr = new Complex[5];
	arr[1] = Complex(2, 2);
	arr[0] = Complex(1, 4);
	arr[2] = Complex(3, 2);
	arr[3] = Complex(0, 0);
	arr[3] = Complex(3, 4);

	sort(arr, 5);

	for (int i = 0; i < 4; ++i)
		arr[i].print();

	return 0;
}
