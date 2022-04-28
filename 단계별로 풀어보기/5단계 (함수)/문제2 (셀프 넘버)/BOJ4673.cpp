#include <iostream>

using namespace std;


int CheckSelfNum(int n) {
	int selfNum = n;
	for (int i = n; i > 0; i /= 10) {
		selfNum += i % 10;
	}	
	return selfNum;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int checkArr[10240] = {0};
	for (int i = 1; i <= 10000; i++) {
		checkArr[CheckSelfNum(i)]++;
	}
	
	for (int i = 1; i <= 10000; i++) {
		if (checkArr[i] == 0) {
			cout << i << "\n";
		}
	}

    return 0;
}

