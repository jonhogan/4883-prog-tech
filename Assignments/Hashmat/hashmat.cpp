/**
* Jon Hogan
* 4883 Programming Techniques
* 08/25/2021
*/


#include <cstdio>

using namespace std;

int subtract(int x, int y)
{
    if (y == 0)
        return x;
    return subtract(x ^ y, (~x & y) << 1);
}

int main() {
    long long B, A;
   
    while (scanf("%lld %lld", &A, &B) != EOF) {

       if(A > B){printf("%lld\n", A - B);}
        else{printf("%lld\n", B - A);}
    }
    return 0;
}

