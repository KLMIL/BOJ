#include <iostream>

using namespace std;

bool IsPrimeNum(int n) {
	if (n == 1) {
		return 0;
	}
	for (int i = 2; i <= n /2; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

void GetPrimeFactor(int n) {
	if (n == 1) {
		return;
	}
	
	int curNum = n;
	while (curNum > 1) {
		for (int i = 2; i <= curNum; i++) {
			if (curNum % i == 0) {
				if (IsPrimeNum(i)) {
					cout << i << "\n";
					curNum /= i;
					break;
				}
			}
		}	
	}
	
}


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	int N;
	cin >> N;

	GetPrimeFactor(N);
	

    return 0;
}


