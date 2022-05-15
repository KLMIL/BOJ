#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	int N, M;
	cin >> N >> M;
	
	int card[100];
	for (int i = 0; i < N; i++) {
		cin >> card[i];
	}
	
	
	int answer = 0;
	for (int i = 0; i < N; i++) {
		int sum = 0;
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				sum = card[i] + card[j] + card[k];
				
				if (answer <= sum && sum <= M) {
					answer = sum;
				}
			}
		}
	}
	
	
	cout << answer;


    return 0;
}


