#include <iostream>
#include <algorithm>
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
	int temp;
	
	std::set<int> card;
	std::vector<int> testCard;
	/* Declare End */


	/* Input */
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> temp;
		card.insert(temp); 
	}
	
	std::cin >> M;
	for (int i = 0; i < M; i++) {
		std::cin >> temp;
		testCard.push_back(temp); 
	}
	/* Input End */


	/* Process */
	
	/* Process End */


	/* Output */
	for (int i = 0; i < M; i++) {
		if (card.find(testCard.at(i)) == card.end()) {
			std::cout << "0 ";
		}
		else {
			std::cout << "1 ";
		}
		
	}
	/* Output End */


    return 0;
}

