#include <iostream>
#include <string>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    string str;
    cin >> str;
    
    int iIndexArr['z' - 'a'];
    fill_n(iIndexArr, 'z' - 'a', -1);
    
    for (int i = 0; i < str.size(); i++) {
    	if (iIndexArr[str[i] - 'a'] == -1) {
    		iIndexArr[str[i] - 'a'] = i;
		}
	}
	
	for (int i = 0; i < 'z' - 'a'; i++) {
		cout << iIndexArr[i] << " ";
	}
	

    return 0;
}

