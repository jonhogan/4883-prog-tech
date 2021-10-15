/**
* Jon Hogan
* 4883 Programming Techniques
* 08/25/2021
*/


#include <cstdio>

using namespace std;

int main() {
    long long B, A;
   
    while (scanf("%lld %lld", &A, &B) != EOF) {

       if(A > B){printf("%lld\n", A - B);}
        else{printf("%lld\n", B - A);}
    }
    return 0;
}

