#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	int x, y, w, h;
	cin >> x >> y >> w >> h;
	
	int minW = x < (w - x) ? x : w - x;
	int minH = y < (h - y) ? y : h - y;
	
	int minDist = minW < minH ? minW : minH;
	
	cout << minDist;


    return 0;
}


