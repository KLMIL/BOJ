#include <iostream>

using namespace std;

struct dot {
	int x;
	int y;
};

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	dot dots[4];
	for (int i = 0; i < 3; i++) {
		cin >> dots[i].x >> dots[i].y;
	}
	
	dots[3].x = dots[0].x == dots[1].x ? dots[2].x : dots[0].x == dots[2].x ? dots[1].x : dots[0].x;
	dots[3].y = dots[0].y == dots[1].y ? dots[2].y : dots[0].y == dots[2].y ? dots[1].y : dots[0].y;	

	cout << dots[3].x << " " << dots[3].y;

    return 0;
}


