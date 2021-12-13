#include <iostream>

int main(){
    long long tc, n;

    while(scanf("%lld", &tc) != EOF){
        for(int i = 0; i < tc; i++){
            scanf("%lld", &n);
        
            n *= 567;
            n /= 9;
            n += 7492;
            n *= 235;
            n /= 47;
            n -= 498;
            n /= 10;
            n %= 10;

            if(n < 0){n *= -1;}

            printf("%lld\n", n);
        }
    }
}