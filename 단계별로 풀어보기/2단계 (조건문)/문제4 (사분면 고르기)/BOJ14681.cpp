#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int dotX, dotY;
    cin >> dotX >> dotY;
    
    if (dotX > 0 && dotY > 0) {
    	cout << 1;
	} 
	else if (dotX < 0 && dotY > 0) {
		cout << 2;
	}
	else if (dotX < 0 && dotY < 0) {
		cout << 3;
	}
	else if (dotX > 0 && dotY < 0) {
		cout << 4;
	}
    
    return 0;
}

