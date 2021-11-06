/**
* Jon Hogan
* 4883 Programming Techniques
* 08/25/2021
*/

#include <stdio.h>

int main() {
    long long B, A, C;
    
    while (scanf("%lld %lld", &A, &B) != EOF) {
      if(A > B){

         B = ~B + 1;

        while (B != 0){
            C = A & B;
            A = A ^ B;
            B = C << 1;
        }

        printf("%lld\n", A);

      }else{
          A = ~A + 1;

          while (A != 0){
            C = B & A;
            B = B ^ A;
            A = C << 1;
            }

            printf("%lld\n", B);
        }
    }
}