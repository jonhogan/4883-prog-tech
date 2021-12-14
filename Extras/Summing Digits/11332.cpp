#include <cstdio>

int main()
{
    int sum;
    long long int n;

    scanf("%lld", &n);
    while(n != 0){
       
        sum = 0;
        while(true){

            while(n != 0){
                sum += (n%10);
                n /= 10;
            }
            if(sum/10==0){
                break;
            }else{
                n = sum;
                sum = 0;
            }
        }

        printf("%d\n", sum);
        scanf("%lld", &n);
    }
}