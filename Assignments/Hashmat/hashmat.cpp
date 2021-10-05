/**
* Jon Hogan
* 4883 Programming Techniques
* 08/25/2021
*/


#include <iostream>

#define endl "\n"

using namespace std;

int main() {
    long B = 0, A = 0, C = 0;
        
    while (cin >> A >> B) {
        
        C = A - B;

        if (C < 0)
        C *= -1;
        
        cout << C << "\n";

    }
    return 0;
}
