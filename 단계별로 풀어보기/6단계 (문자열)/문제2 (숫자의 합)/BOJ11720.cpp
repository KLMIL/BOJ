#include <iostream>
#include <string>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int N;
    cin >> N;
    string sNum;
    cin >> sNum;

    
    int iSum = 0;
    for (int i = 0; i < N; i++) {
    	iSum += sNum[i] - '0';
	}

	
	cout << iSum;


    return 0;
}

