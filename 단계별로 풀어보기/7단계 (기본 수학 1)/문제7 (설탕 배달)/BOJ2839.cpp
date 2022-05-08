#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int N;
    cin >> N;
    
    
    int sugar5kg = N / 5;
    int sugar3kg = 0;
    int restSugar = N % 5;
    
    while (sugar5kg >= 0) {
    	if (restSugar % 3 == 0) {
    		sugar3kg = restSugar / 3;
    		
    		cout << sugar5kg + sugar3kg;
    		return 0;
		}
		
		sugar5kg--;
		restSugar += 5;
	}
    
    cout << -1;


    return 0;
}

