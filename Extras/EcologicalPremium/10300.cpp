#include <cstdio>

int main(){

    double testCase, farmer, farmYard, animal, envFriend, totalPay;
    double avgAnimal, avgPay, sum = 0;
    bool firstRun = true;

    while(scanf("%lf", &testCase) != EOF){
   
       
                
        while(testCase){
            
            scanf("%lf", &farmer);
            if(firstRun == false){
                    printf("\n");
                }

            while(farmer){
                
                scanf("%lf %lf %lf", &farmYard, &animal, &envFriend);

                avgAnimal = farmYard / animal;
                avgPay = avgAnimal * envFriend;
                totalPay = avgPay * animal;
                sum += totalPay;
            
                firstRun = false;
                farmer--;
            }
            long long x = (long long)sum;
            printf("%lld", x);
            sum = 0;
            testCase--;
        }
    }
}