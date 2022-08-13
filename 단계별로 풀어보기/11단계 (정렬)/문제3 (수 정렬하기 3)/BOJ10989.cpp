#include <iostream>

//using namespace std;


int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

	
	// Input
	int N;
	std::cin >> N;
	
	int* count = new int[10001];
	for (int i = 0; i <= 10000; i++) {
		count[i] = 0;
	}
	
	int curNum;
	for (int i = 0; i < N; i++) {
		std::cin >> curNum;
		count[curNum]++;
	}
	// Input End
	
	
	for (int i = 1; i <= 10000; i++) {
		count[i] += count[i - 1];
	}
	
	
	// Output
	for (int i = 1; i <= 10000; i++) {
		for (int j = count[i - 1]; j < count[i]; j++) {
			std::cout << i << "\n";
		}
	}
	// Output End

    return 0;
}


