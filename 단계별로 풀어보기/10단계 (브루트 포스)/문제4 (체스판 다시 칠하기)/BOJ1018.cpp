#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	int N, M;
	cin >> N >> M;
	
	char chessBoard[50][50];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> chessBoard[i][j];
		}
	}
	
	
	int check, min;
	for (int i = 0; i <= N - 8; i++) {
		for (int j = 0; j <= M - 8; j++) {
			check = 0;
			for (int k = i; k < i + 8; k++) {
				for (int l = j; l < j + 8; l++) {
					if ((k + l) % 2 == 0 && chessBoard[k][l] == 'B') {
						check++;
					}
					if ((k + l) % 2 == 1 && chessBoard[k][l] == 'W') {
						check++;
					}
				}
			}
			check = check < 64 - check ? check : 64 - check;
			min = min < check ? min : check;
		}
	}
	
	cout << min;


    return 0;
}


