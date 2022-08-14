#include <iostream>
#include <algorithm>
#include <string>

//using namespace std;

struct Member {
	int age;
	std::string name;
};


bool CompareMemberByAge(Member a, Member b) {
	return a.age < b.age;
}


int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);


	// Declare
	int N;
	Member* member;
	// Declare End


	// Input
	std::cin >> N;
	member = new Member[N];
	for (int i = 0; i < N; i++) {
		std::cin >> member[i].age >> member[i].name;
	}
	// Input End


	// Process
	std::stable_sort(member, member + N, CompareMemberByAge);
	// Process End


	// Output
	for (int i = 0; i < N; i++) {
		std::cout << member[i].age << " " << member[i].name << "\n";
	}
	// Output End


    return 0;
}

