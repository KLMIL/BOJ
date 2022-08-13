#include <iostream>
#include <algorithm>
#include <cmath>

//using namespace std;

struct Count {
	int index;
	int count;
};

bool Compare(Count a, Count b) {
	if (a.count > b.count) {
		return true;
	}
	else if (a.count == b.count){
		if (a.index < b.index) {
			return true;
		}
	}
	return false;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);


	// Declare
	int N;
	int* iArr;
	int sum;
	Count* count;
	
	int mean;
	int median;
	int mode;
	int range;
	// Declare End
	
	// Input
	std::cin >> N;
	
	iArr = new int[N];
	sum = 0;
	count = new Count[8001];
	
	for (int i = 0; i < N; i++) {
		std::cin >> iArr[i];
		sum += iArr[i];
		count[iArr[i] + 4000].count++;
	}
	for (int i = 0; i <= 8000; i++) {
		count[i].index = i;
	}
	// Input End
	
	
	// 0. Sorting
	std::sort(iArr, iArr + N);
	std::sort(count, count + 8001, Compare);
	
	// 1. Arithmetic mean
	mean = floor((float)sum / N + 0.5);

	// 2. Median value
	median = iArr[N / 2];
	
	// 3. Mode
	if (count[0].count == count[1].count) {
		mode = count[1].index - 4000;
	}
	else {
		mode = count[0].index - 4000;
	}
	
	// 4. Range
	range = iArr[N - 1] - iArr[0];
	
	
	// Output
	std::cout << mean << "\n";
	std::cout << median << "\n";
	std::cout << mode << "\n";
	std::cout << range << "\n";
	// Output End
	

    return 0;
}


