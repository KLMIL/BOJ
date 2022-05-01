#include <iostream>
#include <string>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	
	string str;
	cin >> str;
	
	
	// 3sec : ABC / 4sec : DEF  / 5sec : GHI / 6sec : JKL
	// 7sec : MNO / 8sec : PQRS / 9sec : TUV / 10sec : WXYZ
	int time = 0;
	for (int i = 0; i < str.length(); i++) {
		switch(str[i]) {
			case 'A': case 'B': case 'C':
				time += 3; break;
			case 'D': case 'E': case 'F':
				time += 4; break;
			case 'G': case 'H': case 'I':
				time += 5; break;
			case 'J': case 'K': case 'L':
				time += 6; break;
			case 'M': case 'N': case 'O':
				time += 7; break;
			case 'P': case 'Q': case 'R': case 'S':
				time += 8; break;
			case 'T': case 'U': case 'V':
				time += 9; break;
			case 'W': case 'X': case 'Y': case 'Z':
				time += 10; break; 		
		}
	}
	
	cout << time;


    return 0;
}

