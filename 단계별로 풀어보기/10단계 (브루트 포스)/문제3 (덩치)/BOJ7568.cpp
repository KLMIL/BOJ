#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	int N;
	cin >> N;
	
	int people[50][2];
	for (int i = 0; i < N; i++) {
		cin >> people[i][0] >> people[i][1];
	}
	
	int grade[50] = {0};
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (people[i][0] < people[j][0] && people[i][1] < people[j][1]) {
				grade[i]++;
			}
		}
	}
	
	for (int i = 0; i < N; i++) {
		// grade start with 1 -> array "grade" is initialized by 0 -> need +1
		cout << grade[i] + 1 << " ";
	}


    return 0;
}


