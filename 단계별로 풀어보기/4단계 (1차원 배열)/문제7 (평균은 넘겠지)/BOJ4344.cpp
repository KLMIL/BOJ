#include <iostream>
#include <cmath>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int C; // testCase 
    cin >> C;
    
    int N; // num of student
    int iScoreArr[1024]; // scores of students
    int iScoreSum; // sum of iScoreSum
    double ave; // average of iScoreSum
    int count; // counting for "better than average" 
    
    for (int i = 0; i < C; i++) {
    	cin >> N;
    	iScoreSum = 0;
    	for (int j = 0; j < N; j++) {
    		cin >> iScoreArr[j];
    		iScoreSum += iScoreArr[j];
		}
		ave = (double)iScoreSum / N;
		
		count = 0;
		for (int j = 0; j < N; j++) {
			if ((double)iScoreArr[j] > ave) {
				count++;
			}
		}
		
		// 0 ~ 1 값으로 계산된 비율을 소숫점 세자리짜리 표현하기 위해
		// 5자리 정수로 만들고, 반올림 한 뒤 2자리로 보정 
		cout.precision(3);
		cout << fixed; 
		cout << (floor(((double)count / N) * 100000 + 0.5)) / 1000 << "%" <<"\n";
	}


    return 0;
}

