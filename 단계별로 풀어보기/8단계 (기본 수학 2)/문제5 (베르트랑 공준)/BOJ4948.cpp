#include <iostream>

using namespace std;

int Eratos(int n) {
	if (n < 1) {
		return 0;
	}
	
	// Allocate & initialize prime number checking array
	bool* primeNumArr = new bool[n * 2 + 1];
	primeNumArr[0] = false;
	primeNumArr[1] = false;
	for (int i = 2; i <= n * 2; i++) {
		primeNumArr[i] = true;
	}
	
	// Checking that not prime numbers by Eratos algorithm
	for (int i = 2; i <= n * 2; i++) {
		if (primeNumArr[i] == false) {
			continue;
		}
		for (int j = i * 2; j <= n * 2; j += i) {
			primeNumArr[j] = false;
		}
	}
	
	// Count prime numbers
	int count = 0;
	for (int i = n + 1; i <= n * 2; i++) { // range is n < i <= 2n
		if (primeNumArr[i]) {
			count++;
		}
	}
	
	return count;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	int n;
	while (1) {
		cin >> n;
		if (n == 0) {
			break;
		}
		cout << Eratos(n) << "\n";
	}
	

    return 0;
}


