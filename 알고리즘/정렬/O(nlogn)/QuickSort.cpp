#include <iostream>

#define MAX_SIZE 5



void PrintList(int list[], int len) {
	for (int i = 0; i < len; i++) {
		std::cout << list[i] << " ";
	}
	std::cout << "\n";
}


void SWAP(int& A, int& B) {
	int T = A;
	A = B;
	B = T;
}

int Partition(int list[], int left, int right) {
	int low = left;
	int high = right + 1;
	int pivot = list[left];
	int temp;
	
	do {
		do {
			low++;
		} while (low <= right && list[low] < pivot);
		do {
			high--;
		} while (high >= left && list[high] > pivot);
		
		if (low < high) {
			SWAP(list[low], list[high]);
		}
	} while (low < high);
	
	SWAP(list[left], list[high]);
	
	return high;
}

void QuickSort(int list[], int left, int right) {
	if (left < right) {
		int q = Partition(list, left, right);
		QuickSort(list, left, q - 1);
		QuickSort(list, q + 1, right);
	}
}



int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);


	//int len = MAX_SIZE;
	//int list[MAX_SIZE] = {7, 6, 9, 1, 3};
	
	int list[] = {8, 5, 3, 10, 1, 7, 6, 2, 4, 9};
	int len = 10;
	
	
	std::cout << "Before QuickSort: ";
	PrintList(list, len);
	
	QuickSort(list, 0, len - 1);
	
	std::cout << "After QuickSort: ";
	PrintList(list, len);



    return 0;
}

