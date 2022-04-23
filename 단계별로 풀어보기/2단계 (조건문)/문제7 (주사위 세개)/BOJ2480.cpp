#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Input Field
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    // Input End
    
    
    int reward;
    if (num1 == num2 && num2 == num3) {
    	reward = 10000 + num1 * 1000;
	}
	
	if (num1 == num2 && num2 != num3) {
		reward = 1000 + num1 * 100;
	}
	else if (num1 == num3 && num3 != num2) {
		reward = 1000 + num1 * 100;
	}
	else if (num2 == num3 && num3 != num1) {
		reward = 1000 + num2 * 100;
	}
	
	if (num1 != num2 && num2 != num3 && num3 != num1) {
		reward = num1 > num2 ? num1 : num2 > num3 ? num2 : num3;
		reward *= 100;
	}


    // Output Field
    cout << reward;
    // Output End
    
    return 0;
}

