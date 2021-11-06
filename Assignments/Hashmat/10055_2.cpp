#include <stdio.h>

int main() {
    long long B, A;

    while (scanf("%lld %lld", &A, &B) != EOF) {
        (A > B)?printf("%lld\n", (A + ~B) + 1):printf("%lld\n", (B + ~A) + 1);
    }
    
}