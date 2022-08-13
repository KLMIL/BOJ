#include <iostream>

#define MAX_SIZE 5



void SWAP(int& A, int& B) {
	int T = A;
	A = B;
	B = T;
}

void DoHeapify(int list[], int len) {
	for (int i = 1; i < len; i++) {
		int child = i;
		while (child > 0) {
			int root = (child - 1) / 2;
			// Ascending or descending is decided here, by inequality sign
			if (list[root] < list[child]) {
				SWAP(list[root], list[child]);
			}
			child = root;
		}
	}
}

void HeapSort(int list[], int len) {
	DoHeapify(list, len);
	
	for (int i = len - 1; i >= 0; i--) {
		SWAP(list[i], list[0]); 
		DoHeapify(list, i);
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
	//int list[MAX_SIZE] = {7, 6, 9, 1, 3};
	
	
	std::cout << "Before MergeSort: ";
	PrintList(list, len);
	
	HeapSort(list, len);
	
	std::cout << "After MergeSort: ";
	PrintList(list, len);



    return 0;
}

