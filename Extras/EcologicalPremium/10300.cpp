#include <cstdio>

int main(){

    double testCase, farmer, farmYard, animal, envFriend, totalPay;
    double avgAnimal, avgPay, sum = 0;
    
    while(scanf("%lf", &testCase) != EOF){
   
       
                
        while(testCase){
            
            scanf("%lf", &farmer);
            
            for(int i = 0; i < farmer; i++){
                
                scanf("%lf %lf %lf", &farmYard, &animal, &envFriend);

                totalPay = envFriend * farmYard;
                sum += totalPay;
            }
            
            long long x = (long long)sum;
            printf("%lld\n", x);
            sum = 0;
            testCase--;
        }
    }
}