#include <iostream>
#include <string>

using namespace std;


bool IsGroupWord(string str) {
	// eliminate duplicated words
	string noDupStr;
	noDupStr += str[0];
	for (int i = 1; i < str.length(); i++) {
		if (str[i - 1] != str[i]) {
			noDupStr += str[i];
		}
	}
	
	bool usedCharArr['z' - 'a' + 1] = {0};
	for (int i = 0; i < noDupStr.length(); i++) {
		if (usedCharArr[noDupStr[i] - 'a']) {
			return 0;
		}
		usedCharArr[noDupStr[i] - 'a'] = true;
	}
	return 1;
}


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	
	int N;
	cin >> N;
	
	string str;
	int result = N;
	for (int i = 0; i < N; i++) {
		cin >> str;
		if (!IsGroupWord(str)) {
			result--;
		}
	}
    
    
    cout << result;


    return 0;
}

