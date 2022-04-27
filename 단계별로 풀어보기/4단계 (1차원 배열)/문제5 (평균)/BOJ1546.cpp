#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int N;
    cin >> N;
    
    double iScoreArr[1000]; 
    double maxScore = -1;
    for (int i = 0; i < N; i++) {
    	cin >> iScoreArr[i];
    	if (iScoreArr[i] > maxScore) {
    		maxScore = iScoreArr[i];
		}
	}
	
	
	double sum = 0.0;
	for (int i = 0; i < N; i++) {
		iScoreArr[i] = iScoreArr[i] / maxScore * 100;
		sum += iScoreArr[i];
	}
	
	
	cout << sum / N; 

    return 0;
}

