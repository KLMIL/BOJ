#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int iArr[10];
    for (int i = 0 ; i < 10; i++) {
    	cin >> iArr[i];
	}
	
	int iRemainder42Arr[42] = {0};
	for (int i = 0; i < 10; i++) {
		iRemainder42Arr[iArr[i] % 42]++;
	}
	
	int count = 0;
	for (int i = 0; i < 42; i++) {
		if (iRemainder42Arr[i] != 0) {
			count++;
		}
	}
	
	cout << count;


    return 0;
}

