#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int H, M;
    cin >> H >> M;
    
	 
    if (M < 45) { // 45�� ���ϸ� �ð� - 1 
    	H -= 1;
    	M += 15;
	}
	else {
		M -= 45;
	}
	
	if (H < 0) { // �ð��� �������̸� ����� ��ȯ 
		H += 24;
	}
    
    cout << H << " " << M;
    
    return 0;
}

