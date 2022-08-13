#include <iostream>
#include <algorithm>

//using namespace std;


bool Compare(int a, int b) {
	return a > b;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);


	// Declare
	int N;
	int k;
	int* x;
	// Declare End
	
	// Input
	std::cin >> N;
	std::cin >> k;
	
	x = new int[N];
	for (int i = 0; i < N; i++) {
		std::cin >> x[i];
	}
	// Input End
	
	
	std::sort(x, x + N, Compare);
	
	
	// Output
	std::cout << x[k - 1];
	// Output End	


    return 0;
}


