#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>

//using namespace std;


int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);


	/* Declare */
	int N;
	int M;
	int count = 0;
	std::set<std::string> S;
	std::vector<std::string> testStr;
	std::string tmpStr;
	/* Declare End */


	/* Input */
	std::cin >> N >> M;
	for (int i = 0; i < N; i++) {
		std::cin >> tmpStr;
		S.insert(tmpStr);
	}
	for (int i = 0; i < M; i++) {
		std::cin >> tmpStr;
		testStr.push_back(tmpStr); 
	}
	/* Input End */


	/* Process */
	for (int i = 0; i < M; i++) {
		if (S.find(testStr.at(i)) != S.end()) {
			count++;
		}
	}
	/* Process End */


	/* Output */
	std::cout << count;
	/* Output End */


    return 0;
}

