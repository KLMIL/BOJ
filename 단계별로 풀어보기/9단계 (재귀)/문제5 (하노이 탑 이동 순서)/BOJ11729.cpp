#include <iostream>
#include <cmath>

using namespace std;


void Hanoi(int N, int start, int via, int to) {
	if (N == 1) {
		cout << start << " " << to << "\n";
	}
	else {
		Hanoi(N - 1, start, to,via);
		cout << start << " " << to << "\n";
		Hanoi(N - 1, via, start, to);
	}
}



int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int N;
	cin >> N;
	
	cout << (int)(pow(2, N) - 1) << "\n";
	Hanoi(N, 1, 2, 3);
	

    return 0;
}


