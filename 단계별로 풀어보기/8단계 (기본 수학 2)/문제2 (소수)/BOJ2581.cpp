#include <iostream>

using namespace std;


bool IsPrimeNum(int n) {
	if (n == 1) {
		return 0;
	}
	
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int M, N;
    cin >> M >> N;
    
    
    int primeNumSum = 0;
    int minPrimeNum = -1;
    for (int i = N; i >= M; i--) {
    	if (IsPrimeNum(i)) {
    		primeNumSum += i;
    		minPrimeNum = i;
		}
	}
	
	if (primeNumSum == 0) {
		cout << -1;
	}
	else {
		cout << primeNumSum << "\n" << minPrimeNum;
	}


    return 0;
}

