#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Input Field
    int N;
    cin >> N;
    // Input End
    
    
    
    
    
    // Output Field
    for (int i = 1; i < 10; i++) {
    	cout << N << " * " << i << " = " << N * i << "\n";
	}
    // Output End
    
    return 0;
}

