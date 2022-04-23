#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Input Field
    int n;
    cin >> n;
    // Input End
    
    
    int sum = 0;
    for (int i = 1; i <= n; i++) {
    	sum += i;
	}
    
    
    // Output Field
    cout << sum << "\n";
    // Output End
    
    return 0;
}

