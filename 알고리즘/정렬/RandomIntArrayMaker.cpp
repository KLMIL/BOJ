#include <iostream>
#include <stdlib.h>
#include <time.h>

//using namespace std;


int main(void) {
    //std::ios_base::sync_with_stdio(false);
    //std::cin.tie(NULL);


	// Declare
	int n, r;
	int* iArr;
	int* iCheckArr;
	
	// Input
	std::cout << "(n)How Many? >> ";
	std::cin >> n;
	do {
		std::cout << "(r)How Range? (r >= n) >> ";
		std::cin >> r;	
	} while (r < n);
	
	
	// Init
	srand(time(NULL));
	iArr = new int[n];
	iCheckArr = new int[r + 1];
	
	for (int i = 0; i < n; i++) {
		iArr[i] = 0;
		iCheckArr[i + 1] = 0;
	}

	// Process
	int temp;
	for (int i = 0; i < n; i++) {
		do {
			temp = rand() % r + 1;
		} while (iCheckArr[temp] != 0);
		
		iCheckArr[temp] = 1;
		iArr[i] = temp;
	}
	
	// Output
	std::cout << "\n";
	std::cout << "Print random " << n << " numbers on 1 ~ " << r << "\n";

	std::cout << "[";
	for (int i = 0; i < n - 1; i++) {
		std::cout << iArr[i] << ", ";	
	}
	std::cout << iArr[n - 1];
	std::cout << "]";


    return 0;
}


