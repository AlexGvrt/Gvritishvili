#include <iostream>
#include "sorts.h"
#include "work_array.h"

int main() {
	int a = 10;
	int* b = &a;
	int arr[] = {191, 218, 910, 410, 100};
	printArray(arr, 5);
	std::cout << std::endl;
	//std::cout << isSortArray(arr, 5);
	//insertionSort(arr, 5);
	selectionSort(arr, 5);
	printArray(arr, 5);

	return 0;
}