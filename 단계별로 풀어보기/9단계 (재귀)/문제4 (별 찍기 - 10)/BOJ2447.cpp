#include <iostream>

using namespace std;


bool bArr[6562][6562] = {0};


void MakeStar(int x, int y, int N) {
	if (N == 3) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (i == 1 && j == 1) {
					bArr[x + i][y + j] = false;
				}
				else {
					bArr[x + i][y + j] = true;
				}
			}
		}
	}
	else {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (!(i == 1 && j == 1)) {
					MakeStar(x + i * N / 3, y + j * N / 3, N / 3);
				}
			}
		}	
	}
}

void PrintStar(int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (bArr[i][j] == false) {
				cout << ' ';
			}
			else {
				cout << '*';	
			}
		}
		cout << "\n";
	}
}


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	int N;
	cin >> N;
	
	MakeStar(0, 0, N);
	PrintStar(N);
	

    return 0;
}


