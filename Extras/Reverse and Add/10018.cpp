#include <cstdio>
#include <string>

using namespace std;

long long reverse(long long x){
    long long temp = x;
    long long y = 0;

    while(temp != 0){
        y *= 10;
        y += (temp % 10);
        temp /= 10;
    }

    return y;
}

int main(){
    long long N, x, y, count;
    bool pal;

    while (scanf("%lld", &N) != EOF){
        
        
        for(int i = 0; i < N; i++){
            scanf("%lld", &x);
            count = 0;
            pal = false;

            while(!pal){
                y = reverse(x);
                x += y;

                y = reverse(x);

                pal = (x == y);
                count++;            
            }
            printf("%lld %lld\n", count, x);
        }        
    }
}