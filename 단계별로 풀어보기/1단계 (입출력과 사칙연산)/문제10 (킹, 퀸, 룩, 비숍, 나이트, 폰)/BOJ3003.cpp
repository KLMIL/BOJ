#include <iostream>

//using namespace std;


int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);


	/* Declare */
	int standard[6] = {1, 1, 2, 2, 2, 8};
	int pieces[6] = {0};
	int shortage[6] = {0};
	/* Declare End */


	/* Input */
	for (int i = 0; i < 6; i++) {
		std::cin >> pieces[i];
	}
	/* Input End */


	/* Process */
	for (int i = 0; i < 6; i++) {
		shortage[i] = standard[i] - pieces[i];
	}
	/* Process End */


	/* Output */
	for (int i = 0; i < 6; i++) {
		std::cout << shortage[i] << " ";
	}
	/* Output End */


    return 0;
}

