#include <stdio.h>

int main() {
    long long B, A, C;
    long long mask;
    
    while (scanf("%lld %lld", &A, &B) != EOF) {
        C = A + ~B + 1;

        mask = C >> (sizeof(long long)*8-1);
        C = ((C + mask) ^ mask);

        printf("%lld\n", C);
    }
    
}