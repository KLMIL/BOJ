#include <iostream>

using namespace std;


int Factorial(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	return n * Factorial(n - 1);
}


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	int N;
	cin >> N;
	
	cout << Factorial(N);


    return 0;
}


