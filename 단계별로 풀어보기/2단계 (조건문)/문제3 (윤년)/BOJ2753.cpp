#include <iostream>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int year;
    cin >> year;
    
    cout << (!(year % 4) && (year % 100) || !(year % 400));
    
    
    return 0;
}

