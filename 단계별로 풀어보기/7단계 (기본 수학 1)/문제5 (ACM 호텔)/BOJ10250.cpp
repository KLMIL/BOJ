#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int T;
    cin >> T;
    
    int H, W, N;
    for (int i = 0; i < T; i++) {
    	cin >> H >> W >> N;
    	
    	cout << (((N - 1) % H + 1) * 100) + ((N - 1) / H + 1) << "\n";
	}


    return 0;
}

