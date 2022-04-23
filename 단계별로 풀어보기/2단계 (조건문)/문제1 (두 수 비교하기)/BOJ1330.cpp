#include <iostream>
#include <string>

using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int A, B;
    cin >> A >> B;
    
    string sign = (A == B) ? "==" : (A < B) ? "<" : ">";
    cout << sign;
    
    
    return 0;
}

