#include <iostream>

using namespace std;


int GetHeadcount(int k, int n) {
	if (k == 0) {
		return n;
	}
	
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += GetHeadcount(k - 1, i);
	}
	return sum;
}


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int T;
    cin >> T;
    
    int k, n;
    for (int i = 0; i < T; i++) {
    	cin >> k >> n; // k to floor, n to household
    	
    	cout << GetHeadcount(k, n) << "\n";
	}


    return 0;
}

