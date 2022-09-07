/**
* Jon Hogan
* 4883 Programming Techniques
* 08/25/2021
*/

#include <stdio.h>

typedef long long int ll;

//scanf macro
#define scan(A,B) scanf("%lld %lld", &A, &B)

//print macro
#define PRINT(A,B) printf("%lld\n", A + (~B + 1))
#define PRINT(B,A) printf("%lld\n", B + (~A + 1))

//While Loop
#define WHILE(A,B) while(scan(A,B) != EOF)

// If statement
#define IF(A,B) (A > B)?PRINT(A,B):PRINT(B,A)
//#define SWITCH(A,B) switch(A > B){case true: PRINT(A,B); break; default: PRINT(B,A);}



int main() {
    ll B, A;
    
    WHILE(A,B){
      IF(A,B);
    }
}
