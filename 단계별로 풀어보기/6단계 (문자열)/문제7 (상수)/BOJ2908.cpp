#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    string A, B;
    cin >> A >> B;
    
    
    int revA = (A[2] - '0') * 100 + (A[1] - '0') * 10 + (A[0] - '0');
    int revB = (B[2] - '0') * 100 + (B[1] - '0') * 10 + (B[0] - '0');


	cout << (revA > revB ? revA : revB);
	

    return 0;
}

