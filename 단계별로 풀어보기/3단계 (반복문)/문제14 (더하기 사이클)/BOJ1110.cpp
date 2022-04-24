#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Input Field
    int N;
    cin >> N;
    // Input End
    
    
    int cycle = 0;
    
    int lNum = 0;
    int rNum = 0;
    int sNum = N;
    
    while (1) {
    	lNum = sNum / 10; // 좌변 십의자리 
    	rNum = sNum % 10; // 좌변 일의자리 
    	sNum = rNum * 10 + (lNum + rNum) % 10; // 우변 값 최신화 
    	cycle++;
    	
    	if (sNum == N) {
    		break;
		}
	}
    
    
    // Output Field
    cout << cycle;
    // Output End
    
    return 0;
}

