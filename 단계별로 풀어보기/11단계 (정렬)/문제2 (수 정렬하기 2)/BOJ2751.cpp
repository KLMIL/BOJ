#include <iostream>

//using namespace std;


void Merge(int list[], int tempList[], int left, int right) {
	int tempIdx = left;
	int mid = (left + right) / 2;
	
	int L = left;
	int R = mid + 1;
	
	while (L <= mid && R <= right) {
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


int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

	// Input
	int N;
	std::cin >> N;
	// Input End
	
	int* iArr = new int[N];
	int* iTempArr = new int[N];
	for (int i = 0; i < N; i++) {
		std::cin >> iArr[i];
	}
	
	MergeSort(iArr, iTempArr, 0, N - 1);
	
	
	// Output 
	for (int i = 0; i < N; i++) {
		std::cout << iArr[i] << "\n";
	}
	// Output End


    return 0;
}


