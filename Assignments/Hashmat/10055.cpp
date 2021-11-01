/**
* Jon Hogan
* 4883 Programming Techniques
* 08/25/2021
*/


#include <cstdio>

int main() {
    register long long B, A;
   
    while (scanf("%lld %lld", &A, &B) != EOF) {
       (A > B)?printf("%lld\n", (A + ~B) + 1):printf("%lld\n", (B + ~A) + 1);
    }
}

