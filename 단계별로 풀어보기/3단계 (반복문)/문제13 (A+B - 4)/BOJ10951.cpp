#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Input Field
    int A, B;
    // Input End
    
    
    
    
    
    // Output Field
    while (1) {
    	cin >> A >> B;
    	if (cin.eof()) {
    		break;
		}
		cout << A + B << "\n";
	}
    // Output End
    
    return 0;
}

