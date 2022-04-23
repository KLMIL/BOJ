#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Input Field
    int T;
    cin >> T;
    // Input End
    
    
    int A, B;
    
    
    // Output Field
    for (int i = 0; i < T; i++) {
    	cin >> A >> B;
    	cout << A + B << "\n";
	}
    // Output End
    
    return 0;
}

