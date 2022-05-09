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


	int T;
	cin >> T;
	
	int n;
	int part1, part2;
	for (int i = 0; i < T; i++) {
		cin >> n;
		
		for (part1 = n / 2, part2 = n / 2; part1 > 0; part1--, part2++) {
			if (IsPrimeNum(part1) && IsPrimeNum(part2)) {
				cout << part1 << " " << part2 << "\n";
				break;
			}
		}
	}


    return 0;
}


