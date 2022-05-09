#include <iostream>

using namespace std;


void Eratos(int m, int n) {
	if (n <= 1) {
		return;
	}
	
	// Allocate, Init array
	bool* primeArr = new bool[n + 1];
	primeArr[0] = false;
	primeArr[1] = false;
	for (int i = 2; i <= n; i++) {
		primeArr[i] = true;
	}
	
	// Calculate Prime numbers
	for (int i = 2; i <= n; i++) {
		if (primeArr[i] == false) { // Skip already checked number 
			continue;
		}
		for (int j = 2 * i; j <= n; j += i) { // Check all multiplied num
			primeArr[j] = false;
		}
	}
	
	// Print Array
	for (int i = m; i <= n; i++) {
		if (primeArr[i] == true) {
			cout << i << "\n";
		}
	}
}


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	int M, N;
	cin >> M >> N;

	Eratos(M, N);

    return 0;
}


