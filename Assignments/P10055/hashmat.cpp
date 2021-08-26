/**
* Jon Hogan
* 4883 Programming Techniques
* 08/25/2021
*/


#include <iostream>

#define endl "\n"

using namespace std;

int main() {
    int B = 0, A = 0, C = 0;
    bool looped = false;
    
    while (cin >> A >> B) {

        if ( looped = true)
            cout << "\n";
        
        C = A - B;

        if (A - B < 0)
            C *= -1;
        
        cout << C;

        looped = true;
    }
    return 0;
}