#include <cstdio>

int main(){
    int count = 0, max, n, x;

    while(scanf("%d", n) != EOF){
        max = 0;

        for(int i = 0; i < n; i++){
            scanf("%d", x);
            if(x > max){max = x;}
        }
        count++;
        printf("Case %d: %d\n", count, max);
    }
}