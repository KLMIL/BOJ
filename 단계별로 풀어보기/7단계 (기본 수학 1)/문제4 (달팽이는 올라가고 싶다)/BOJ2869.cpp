#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int A, B, V;
    cin >> A >> B >> V;
    
    
    // On the last day, snail moves "A", not "A - B" 
	//  -> total distance is "V - A" (+ 1 day that moves A)
    // If there is remainder on "(V - A) / (A - B)", snail need one more day.
    if ((V - A) % (A - B) == 0) {
    	cout << (V - A) / (A - B) + 1;
	}
	else {
		cout << (V - A) / (A - B) + 2;
	}
    

    return 0;
}

