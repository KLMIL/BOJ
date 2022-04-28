// 함수 구현하는 문제 

#include <vector>
long long sum(std::vector<int> &a) {
	long long ans = 0;
	
	for (int i = 0 ; i < a.size(); i++) {
		ans += a.at(i);
	}
	
	return ans;
}

