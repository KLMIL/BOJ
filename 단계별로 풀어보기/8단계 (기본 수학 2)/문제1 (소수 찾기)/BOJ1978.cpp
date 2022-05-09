#include <iostream>

using namespace std;


bool isPrime(int n) {
	if (n == 1) {
		return 0;
	}
	else if (n == 2) {
		return 1;
	}
	else {
		for (int i = 2; i <= n / 2; i++) {
			if (n % i == 0) {
				return 0;
			}
		}
	}

	return 1;
}


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int N;
    cin >> N;
    int iNumArr[100];
    for (int i = 0; i < N; i++) {
    	cin >> iNumArr[i];
	}
	
	int numOfPrimeNum = 0;
	for (int i = 0; i < N; i++) {
		if (isPrime(iNumArr[i])) {
			numOfPrimeNum++;
		}
	}
	
	
	cout << numOfPrimeNum;


    return 0;
}

