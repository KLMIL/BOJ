#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int A, B, C;
    cin >> A >> B >> C;
    int multiABC = A * B * C;
    
    
    int iNumCntArr[10] = {0};
	while (multiABC > 0) {
		iNumCntArr[multiABC % 10]++;
		multiABC /= 10;
	}
	
	
	for (int i = 0; i < 10; i++) {
		cout << iNumCntArr[i] << "\n";
	}

    return 0;
}

