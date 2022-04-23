#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int record;
    cin >> record;
    
    if (90 <= record) {
    	cout << 'A';
	}
	else if (80 <= record && record < 90) {
		cout << 'B';
	}
	else if (70 <= record && record < 80) {
		cout << 'C';
	}
	else if (60 <= record && record < 70) {
		cout << 'D';
	}
	else {
		cout << 'F';
	}
    
    
    return 0;
}

