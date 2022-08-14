#include <iostream>
#include <algorithm>
#include <string>

//using namespace std;


bool Compare(char a, char b) {
	return a > b;
}


int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);


	// Declare
	std::string N;
	// Declare End
	
	
	// Input
	std::cin >> N;
	// Input End
	
	
	// Process
	sort(N.begin(), N.end(), Compare);
	// Process End
	
	
	// Output
	std::cout << N;
	// Output End


    return 0;
}


