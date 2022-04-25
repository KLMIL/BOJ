#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Input Field
    int N;
    cin >> N;
    
    int* iArr = new int[N];
    for (int i = 0; i < N; i++) {
    	cin >> iArr[i];
	}
	
	int min = iArr[0], max = iArr[0];
    // Input End
    
    
    for (int i = 1; i < N; i++) {
    	if (iArr[i] < min) {
    		min = iArr[i];
		}
		if (iArr[i] > max) {
			max = iArr[i];
		}
	}
    
    
    // Output Field
    cout << min << " " << max;
    // Output End
    
    delete iArr;
    
    return 0;
}

