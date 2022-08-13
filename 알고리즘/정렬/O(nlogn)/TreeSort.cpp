#include <iostream>



void PrintList(int list[], int len) {
	for (int i = 0; i < len; i++) {
		std::cout << list[i] << " ";
	}
	std::cout << "\n";
}






int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);


	
	int list[] = {8, 5, 3, 10, 1, 7, 6, 2, 4, 9};
	int len = 10;
	
	
	std::cout << "Before QuickSort: ";
	PrintList(list, len);
	
	TreeSort(list, 0, len - 1);
	
	std::cout << "After QuickSort: ";
	PrintList(list, len);



    return 0;
}

