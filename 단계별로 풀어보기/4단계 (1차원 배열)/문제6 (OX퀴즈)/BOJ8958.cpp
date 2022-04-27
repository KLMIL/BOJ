#include <iostream>
#include <cstring>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int testCase;
    cin >> testCase;
    
    char OXresult[128];
    int score;
    int count;
    for (int i = 0; i < testCase; i++) {
		cin >> OXresult;
		
		score = 0;
		count = 0;
		for (int j = 0; j < strlen(OXresult); j++) {
			if (OXresult[j] == 'O') {
				score += ++count;
			}
			else {
				count = 0;
			}
		}
		
		cout << score << "\n";
	}


    return 0;
}

