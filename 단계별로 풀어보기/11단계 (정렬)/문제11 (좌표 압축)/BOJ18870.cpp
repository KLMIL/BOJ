#include <iostream>
#include <algorithm>
#include <vector>

//using namespace std;


int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);


	/* Declare */
	int N;
	std::vector<int> X;
	/* Declare End */


	/* Input */
	std::cin >> N;
	int temp;
	for (int i = 0; i < N; i++) {
		std::cin >> temp;
		X.push_back(temp);
	}
	/* Input End */


	/* Process */
	std::vector<int> result = X;
	std::sort(X.begin(), X.end());
	
	X.erase(unique(X.begin(), X.end()), X.end());
	/* Process End */


	/* Output */
	for (int i = 0; i < N; i++) {
		std::cout << lower_bound(X.begin(), X.end(), result.at(i)) - X.begin() << " ";
	}
	/* Output End */


    return 0;
}

