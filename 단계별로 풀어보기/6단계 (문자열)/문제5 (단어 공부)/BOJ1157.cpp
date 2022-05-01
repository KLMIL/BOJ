#include <iostream>
#include <string>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    string str;
    cin >> str;
    

    int iCheckArr['z' - 'a' + 1] = {0};
	for (int i = 0; i < str.length(); i++) {
		str[i] = tolower(str[i]);
		iCheckArr[str[i] - 'a']++;
	}
	
	
	int maxIndex = 0;
	bool dupCheck = false;
	for (int i = 1; i < 'z' - 'a' + 1; i++) {
		if (iCheckArr[i] == iCheckArr[maxIndex] && iCheckArr[maxIndex] != 0) {
			dupCheck = true;
		}
		if (iCheckArr[i] > iCheckArr[maxIndex]) {
			maxIndex = i;
			dupCheck = false;
		}
	}
	
	
	if (dupCheck == true) {
		cout << '?';
	}
	else {
		cout << (char)(maxIndex + 'A');
	}

    return 0;
}

