#include <iostream>

using namespace std;


int Fibonacci(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1 || n == 2) {
		return 1;
	}
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	int n;
	cin >> n;
	
	cout << Fibonacci(n);

    return 0;
}


