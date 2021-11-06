/**
* Jon Hogan
* 4883 Programming Techniques
* 08/25/2021
*/


#include <cstdio>

int main() {
    long long army[2];
   
    while (scanf("%lld %lld", &army[0], &army[1]) != EOF) {

       (army[0] > army[1])?printf("%lld\n", (army[0] + (~army[1])+1)):printf("%lld\n", (army[1] + (~army[0])+1));
    }
    return 0;
}

