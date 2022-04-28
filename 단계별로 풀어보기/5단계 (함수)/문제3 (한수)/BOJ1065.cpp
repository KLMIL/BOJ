#include <iostream>

using namespace std;

// One digit : 1 ~ 9 : 9ea
// Two digit : 10 ~ 99 : 90ea 
// Three digit : Need to calculate

// abc -> if (a - b == b - c) -> return 1
bool IsGradationNum(int n) {
	if ((n / 100 - n / 10 % 10) == (n / 10 % 10 - n % 10)) {
		return 1;
	}
	else {
		return 0;	
	}
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int N;
	cin >> N;
	
	
	int count;
	if (N < 100) {
		count = N;
	}
	else {
		count = 99;
		for (int i = 100; i <= N; i++) {
			if (IsGradationNum(i)) {
				count++;
			}
		}
	}
	
	
	cout << count;


    return 0;
}

