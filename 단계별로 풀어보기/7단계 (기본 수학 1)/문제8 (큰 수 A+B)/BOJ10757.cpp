#include <iostream>
#include <string>

using namespace std;


string BigIntSum(string A, string B) {	
	//int shortLength = A.length() < B.length() ? A.length() : B.length();
	//int longLength = A.length() > B.length() ? A.length() : B.length();
	
	string shortStr = A.length() < B.length() ? A : B;
	string longStr = A.length() < B.length() ? B : A;
	string sumStr;
	
	int sum;
	int carry = 0;
	char num;
	for (int i = 1; i <= shortStr.length(); i++) {
		sum = A.at(A.length() - i) - '0' + B.at(B.length() - i) -'0' + carry;
		carry = sum / 10;
		num = sum % 10 + '0';
		
		sumStr = num + sumStr;
	}
	
	for (int i = longStr.length() - shortStr.length() - 1; i >= 0; i--) {
		sum = longStr.at(i) - '0' + carry;
		carry = sum / 10;
		num = sum % 10 + '0';
		
		sumStr = num + sumStr;
	}
	
	if (carry == 1) {
		sumStr = '1' + sumStr;
	}
	
	return sumStr;
}


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	string A, B;
	cin >> A >> B;
	
	cout << BigIntSum(A, B);


    return 0;
}

