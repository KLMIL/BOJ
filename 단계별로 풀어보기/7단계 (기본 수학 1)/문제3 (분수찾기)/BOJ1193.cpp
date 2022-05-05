#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int X;
    cin >> X;
    
    /*
		1 2 6 7  | 1/1 1/2 1/3 1/4
		3 5 8    | 2/1 2/2 2/3 
		4 9      | 3/1 3/2 
		10       | 4/1
		1 -> 2 -> 3 -> 4 -> ... 
		(Sum of denominator and numerator is same on diagonal)
		(Value is "1 + n" (1 + 1, 1 + 2, 1 + 3, ...)
		
		Formula of the sum of arithmetical progression :
			S = n * (a + l) / 2
	*/
	
	int n = 1;
	while (X > (n * (1 + n) / 2)) {
		n++;
	}
    
    // We need the sum of privious sequence : Last diagonal is not full.
    int seq = X - ((n - 1) * (1 + (n - 1)) / 2);
    
    int numerator, denominator;
    if (n % 2 == 0) { // if n is even -> down (like 2 in 1/2)
    	numerator = seq;
  		denominator = (1 + n) - seq; 
	}
	else { // if n is odd -> up (like 3 in 1/3)
		numerator = (1 + n) - seq;
  		denominator = seq;
	}

    
    
	cout << numerator << "/" << denominator;


    return 0;
}

