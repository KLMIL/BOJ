#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    // A = fixed cost / year
	// B = variable cost
	// C = price
    int A, B, C;
    cin >> A >> B >> C;
    
    if (C - B > 0) {
    	cout << A / (C - B) + 1;	
	}
	else {
		cout << -1;
	}
	

    return 0;
}

