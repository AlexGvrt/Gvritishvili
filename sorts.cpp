
int isSortArray(const int* arr, int size) {
	int sum = 0;
	int flag = 0; // 0 - общего типа, 1 - по возрастанию, -1 - по убыванию
	for (int i = 0; i < size - 1; i++) {
		if (arr[i + 1] > arr[i]) {
			sum++;
		}
		else if (arr[i + 1] < arr[i]) {
			sum--;
		}
		else if (arr[i + 1] == arr[i]) {
			sum += sum > 0 ? 1 : -1;
		}
	}
	if (sum == size - 1) {
		return 1;
	}
	else if (sum == -size + 1) {
		return -1;
	}
	else return 0;
}

void insertionSort(int* arr, int size) // сортировка вставками
{
	int temp, // временная переменная для хранения значения элемента сортируемого массива
		item; // индекс предыдущего элемента
	for (int counter = 1; counter < size; counter++) {
		temp = arr[counter]; // инициализируем временную переменную текущим значением элемента массива
		item = counter - 1; // запоминаем индекс предыдущего элемента массива
		while (item >= 0 && arr[item] > temp) // пока индекс не равен 0 и предыдущий элемент массива больше текущего
		{
			arr[item + 1] = arr[item]; // перестановка элементов массива
			arr[item] = temp;
			item--;
		}
	}
}

//Swap function 
void swap(int* xp, int* yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int* arr, int size)
{
	int min_idx;

	for (int i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (int j = i + 1; j < size; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;

		swap(&arr[min_idx], &arr[i]);
	}
}
