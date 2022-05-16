#include <iostream>

using namespace std;


void SelectionSort(int list[], int len) {
    for (int i = 0; i < len - 1; i++) {
        int index = i;

        for (int j = i + 1; j < len; j++) {
        	// Ascending or descending is decided here, by inequality sign
            if (list[j] < list[index]) {
                index = j;
            }
        }

        if (i != index) {
            int temp = list[i];
            list[i] = list[index];
            list[index] = temp;
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
	
	SelectionSort(list, len);
	
	cout << "After : ";
	PrintList(list, len);


    return 0;
}


