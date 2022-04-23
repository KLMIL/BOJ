#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int H, M;
    cin >> H >> M;
    
	 
    if (M < 45) { // 45분 이하면 시간 - 1 
    	H -= 1;
    	M += 15;
	}
	else {
		M -= 45;
	}
	
	if (H < 0) { // 시간이 음수값이면 양수로 변환 
		H += 24;
	}
    
    cout << H << " " << M;
    
    return 0;
}

