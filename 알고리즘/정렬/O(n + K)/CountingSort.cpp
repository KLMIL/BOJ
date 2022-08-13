#include <iostream>

//using namespace std;


void PrintList(int list[], int len) {
	for (int i = 0; i < len; i++) {
		std::cout << list[i] << " ";
	}
	std::cout << "\n";
}


int* CountingSort(int list[], int len, int max) {
	int* count = new int[max + 1];
	int* result = new int[len];
	
	for (int i = 0; i <= max; i++) {
		count[i] = 0;
	}
	
	for (int i = 0; i < len; i++) {
		count[list[i]]++;
	}
	
	for (int i = 1; i <= max; i++) {
		count[i] += count[i - 1];
	}
	
	for (int i = len - 1; i >= 0; i--) {
		result[--count[list[i]]] = list[i];
	}
	
	delete(count);
	return result;
}


int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);



	int list[] = {5, 4, 3, 2, 1, 1, 2, 3, 4, 5};
	int len = 10;
	int max = 10;
	int* result;
	
	
	std::cout << "Before CountingSort: ";
	PrintList(list, len);
	
	result = CountingSort(list, len, max);
	
	std::cout << "After CountingSort: ";
	PrintList(result, len);



    return 0;
}



