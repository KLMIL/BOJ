#include <iostream>
#include <algorithm>
#include <string>

//using namespace std;


bool Compare(std::string a, std::string b) {
	if (a.length() < b.length()) {
		return true;
	}
	else if (a.length() == b.length()){
		return a < b;
	}
	return false;
}

void EliminateDuplicate(std::string* strArr, int& N) {
	for (int i = 0; i < N - 1; i++) {
		if (strArr[i] == strArr[i + 1]) {
			for (int j = i; j < N - 1; j++) {
				strArr[j] = strArr[j + 1];
			}
			i--;
			N--;
		}
	}
}


int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);


	// Declare
	int N;
	std::string* strArr;
	// Declare End
	
	
	// Input
	std::cin >> N;
	strArr = new std::string[N];
	for (int i = 0; i < N; i++) {
		std::cin >> strArr[i];
	}
	// Input End
	
	
	// Process
	std::sort(strArr, strArr + N, Compare);
	EliminateDuplicate(strArr, N);
	// Process End
	
	
	// Output
	for (int i = 0; i < N; i++) {
		std::cout << strArr[i] << "\n";
	}
	// Output End


    return 0;
}


