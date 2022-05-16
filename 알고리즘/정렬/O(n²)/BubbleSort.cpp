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

void PrintList(int list[], int len) {
	for (int i = 0; i < len; i++) {
		cout << list[i] << " ";
	}
	cout << "\n";
}


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	int len = 5;
	int list[] = {7, 6, 9, 1, 3};
	
	
	cout << "Before : ";
	PrintList(list, len);
	
	BubbleSort(list, len);
	
	cout << "After : ";
	PrintList(list, len);


    return 0;
}


