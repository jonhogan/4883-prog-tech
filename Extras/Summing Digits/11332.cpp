#include <cstdio>

int main()
{
    int t;
    long long int n;

    scanf("%lld", &n);
    while(n != 0){
        if(n==0)
        break;

        t=0;
        while(1){

            while(n!=0){
                t=t+(n%10);
                n=n/10;
            }
            if(t/10==0){
                break;
            }else{
                n=t;
                t=0;
            }
        }

        printf("%d\n",t);
        scanf("%lld", &n);
    }
}