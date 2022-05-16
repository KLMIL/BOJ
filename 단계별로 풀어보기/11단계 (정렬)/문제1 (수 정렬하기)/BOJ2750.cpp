#include <iostream>

using namespace std;


void BubbleSort(int list[], int len) {
	for (int i = len - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			// Ascending or descending is decided here, by inequality sign
			if (list[j] > list[j + 1]) {
				int temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
}


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	int N;
	cin >> N;
	
	int iArr[1000];
	for (int i = 0; i < N; i++) {
		cin >> iArr[i];
	}

	
	BubbleSort(iArr, N);


	for (int i = 0; i < N; i++) {
		cout << iArr[i] << "\n";
	}
	

    return 0;
}


