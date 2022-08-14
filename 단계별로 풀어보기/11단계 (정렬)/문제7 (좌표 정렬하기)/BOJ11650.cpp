#include <iostream>
#include <algorithm>

//using namespace std;


struct Dot {
	int x;
	int y;
};


bool Compare(Dot a, Dot b) {
	if (a.x < b.x) {
		return true;
	}
	else if (a.x == b.x) {
		if (a.y < b.y) {
			return true;
		}
	}
	return false;
}


int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);


	// Declare
	Dot* dot;
	int N;
	// Declare End
	
	
	// Input
	std::cin >> N;
	dot = new Dot[N];
	for (int i = 0; i < N; i++) {
		std::cin >> dot[i].x >> dot[i].y;
	}
	// Input End
	
	
	// Process
	std::sort(dot, dot + N, Compare);
	// Process End
	
	
	// Output
	for (int i = 0; i < N; i++) {
		std::cout << dot[i].x << " " << dot[i].y << "\n";
	}
	// Output End


    return 0;
}


