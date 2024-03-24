
int isSortArray(const int* arr, int size) {
	int sum = 0;
	int flag = 0; // 0 - ������ ����, 1 - �� �����������, -1 - �� ��������
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

void insertionSort(int* arr, int size) // ���������� ���������
{
	int temp, // ��������� ���������� ��� �������� �������� �������� ������������ �������
		item; // ������ ����������� ��������
	for (int counter = 1; counter < size; counter++) {
		temp = arr[counter]; // �������������� ��������� ���������� ������� ��������� �������� �������
		item = counter - 1; // ���������� ������ ����������� �������� �������
		while (item >= 0 && arr[item] > temp) // ���� ������ �� ����� 0 � ���������� ������� ������� ������ ��������
		{
			arr[item + 1] = arr[item]; // ������������ ��������� �������
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
