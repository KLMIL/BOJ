#include <iostream>

#define MAX_SIZE 5



void Merge(int list[], int tempList[], int left, int right) {
	int tempIdx = left;
	int mid = (left + right) / 2;

	int L = left;
	int R = mid + 1;
	
	while (L <= mid && R <= right) {
		// Ascending or descending is decided here, by inequality sign
		if (list[L] <= list[R]) {
			tempList[tempIdx++] = list[L++];
		}
		else {
			tempList[tempIdx++] = list[R++];
		}
	}
	
	if (L > mid) {
		for (int i = R; i <= right; i++) {
			tempList[tempIdx++] = list[i];
		}
	}
	else {
		for (int i = L; i <= mid; i++) {
			tempList[tempIdx++] = list[i];
		}
	}
	
	for (int i = left; i <= right; i++) {
		list[i] = tempList[i];
	}
}

void MergeSort(int list[], int tempList[], int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2;
		MergeSort(list, tempList, left, mid);
		MergeSort(list, tempList, mid + 1, right);
		Merge(list, tempList, left, right);
	}
}


void PrintList(int list[], int len) {
	for (int i = 0; i < len; i++) {
		std::cout << list[i] << " ";
	}
	std::cout << "\n";
}



int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);


	int len = MAX_SIZE;
	int list[MAX_SIZE] = {7, 6, 9, 1, 3};
	int tempList[MAX_SIZE];
	
	
	std::cout << "Before MergeSort: ";
	PrintList(list, len);
	
	MergeSort(list, tempList, 0, len - 1);
	
	std::cout << "After MergeSort: ";
	PrintList(list, len);



    return 0;
}

