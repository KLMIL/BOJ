#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int N;
    cin >> N;
    
    // Num of touching hexagon :
	// 1(center) - 6 - 12 - 18 ... => arithmetic progression!
	
	int step = 1;
	int curMaxNum = 1;
	while (curMaxNum < N) {
		curMaxNum += step * 6;
		step++;
	}
	
	
	cout << step;


    return 0;
}

