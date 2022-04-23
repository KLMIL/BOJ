#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Input Field
    int curHour, curMin, reqMin;
    cin >> curHour >> curMin>> reqMin;
    // Input End
    
    
    curHour += reqMin / 60;
    curMin += reqMin % 60;
    
    if (60 <= curMin) {
    	curHour++;
    	curMin -= 60;
	}
	if (23 < curHour) {
		curHour -= 24;
	}
	
	
	// Output Field
	cout << curHour << " " << curMin;
    // Output End
    
    return 0;
}

