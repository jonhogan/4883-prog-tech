#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long bulb, temp;

    scanf("%lld", &bulb);

    while(bulb != 0){
        temp = sqrt(bulb);
         temp *= temp;

         if(temp == bulb){
             printf("yes\n");
         }else{
             printf("no\n");
         }

         scanf("%lld", &bulb);
    }
}