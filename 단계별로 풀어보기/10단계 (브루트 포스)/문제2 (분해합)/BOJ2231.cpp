#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	int N;
	cin >> N;
	
	int num, sum;
	int answer = 0;
	for (int i = 1; i < N; i++) {
		sum = num = i;
		while (num > 0) {
			sum += num % 10;
			num /= 10;
		}
		
		if (sum == N) {
			answer = i;
			break;
		}
	}

	cout << answer;
	

    return 0;
}


