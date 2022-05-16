#include <iostream>

using namespace std;


void InsertionSort(int list[], int len) {
    for (int i = 1; i < len; i++) {
        int key = list[i];
        
		// Ascending or descending is decided here, by inequality sign
		int j;
        for (j = i - 1; j >= 0 && list[j] > key; j--) {
            list[j + 1] = list[j];
        }

        list[j + 1] = key;
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
	
	InsertionSort(list, len);
	
	cout << "After : ";
	PrintList(list, len);


    return 0;
}


