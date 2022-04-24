#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Input Field
    int N, X;
    cin >> N >> X;
    // Input End
    
    
    int curNum;
    for (int i = 0; i < N; i++) {
    	cin >> curNum;
    	if (curNum < X) {
    		cout << curNum << " ";
		}
	}
    
    
    // Output Field
    
    // Output End
    
    return 0;
}

