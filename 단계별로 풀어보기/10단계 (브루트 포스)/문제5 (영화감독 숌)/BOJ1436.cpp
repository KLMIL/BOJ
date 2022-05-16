#include <iostream>

using namespace std;


int MovieTitleNum(int n) {
	int seq = 0;
	for (int num = 666; ; num++) {
		for (int tempNum = num, count = 0; tempNum > 0; tempNum /= 10) {
			if (tempNum % 10 == 6) {
				count++;
			}
			else {
				count = 0;
			}
			
			if (count == 3) {
				seq++;
				if (seq == n) {
					return num;
				}
			}
		}
	}
}


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	int N;
	cin >> N;
	
	cout << MovieTitleNum(N);


    return 0;
}

