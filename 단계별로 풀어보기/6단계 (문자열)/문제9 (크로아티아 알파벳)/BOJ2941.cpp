#include <iostream>
#include <string>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	string str;
	cin >> str;

    // c=, c-, dz=, d-, lj, nj, s=, z=
    int size = str.length();
    for (int i = 0; i < str.length() - 1; i++) {
    	if (str[i] == 'c' && (str[i + 1] == '=' || str[i + 1] == '-')) {
			size--;
			i++;
		}
		if (str[i] == 'd') {
			if (str[i + 1] == 'z' && str[i + 2] == '=') {
				size -= 2;
				i += 2;
			}
			if (str[i + 1] == '-') {
				size--;
				i++;
			}
		}
		if (str[i] == 'l' && str[i + 1] == 'j') {
			size--;
			i++;
		}
		if (str[i] == 'n' && str[i + 1] == 'j') {
			size--;
			i++;
		}
		if (str[i] == 's' && str[i + 1] == '=') {
			size--;
			i++;
		}
		if (str[i] == 'z' && str[i + 1] == '=') {
			size--;
			i++;
		}
	}
    
    
    cout << size;
    

    return 0;
}

