#include <iostream>

using namespace std;


bool IsRightTriangle(int a, int b, int c) {
	int width, height, diagonal;
	
	if (a > b && a > c) {
		diagonal = a;
		width = b;
		height = c;
	}
	if (b > a && b > c) {
		diagonal = b;
		width = a;
		height = c;
	}
	if (c > a && c > b) {
		diagonal = c;
		width = a;
		height = b;
	}
	
	if (diagonal * diagonal == width * width + height * height) {
		return true;
	}
	else {
		return false;
	}
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	int a = -1, b = -1, c = -1;
	while (1) {
		cin >> a >> b >> c;
		
		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		
		if (IsRightTriangle(a, b, c)) {
			cout << "right\n";
		}
		else {
			cout << "wrong\n";
		}
	}


    return 0;
}


