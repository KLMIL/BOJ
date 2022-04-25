#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int iNumArr[9];
    for (int i = 0; i < 9; i++) {
    	cin >> iNumArr[i];
	}
	
	int max = iNumArr[0];
	int index = 0;
	for (int i = 1; i < 9; i++) {
		if (iNumArr[i] > max) {
			max = iNumArr[i];
			index = i;
		}
	}
	
	cout << max << "\n" << index + 1;
    
    
    return 0;
}

