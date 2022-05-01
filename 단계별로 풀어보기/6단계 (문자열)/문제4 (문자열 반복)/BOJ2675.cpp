#include <iostream>
#include <string>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int T;
    cin >> T;
    
    int R;
    string S;
    string P;
    for (int i = 0; i < T; i++) {
    	cin >> R >> S;
    	
    	P.resize(R * S.length());
    	P.capacity();
    	for (int j = 0; j < S.length(); j++) {
    		for (int k = 0; k < R; k++) {
    			P[j * R + k] = S[j];
			}
		}
		
		cout << P << "\n";
	}
	

    return 0;
}

