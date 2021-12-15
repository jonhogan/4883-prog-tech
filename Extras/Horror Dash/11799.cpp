#include <cstdio>

int main(){
    int count = 0, max, n, x, t;

    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d", &n);
        max = 0;
        
        for(int j = 0; j < n; j++){
            scanf("%d", &x);
            if(x > max){max = x;}
        }
        count++;
        printf("Case %d: %d\n", count, max);
    }
}