#include<stdio.h>


int main() {
 int myUglies[1500] = {1}, u2 = 0, u3 = 0, u5 = 0, temp, i;
 for(i = 1; i < 1500; i++) {
    
    while(myUglies[u2]*2 <= myUglies[i-1]){
        u2++;
    }

    while(myUglies[u3]*3 <= myUglies[i-1]){
        u3++;
    }

    while(myUglies[u5]*5 <= myUglies[i-1]){
        u5++;
    }
  
    temp = myUglies[u2]*2;
    
    if(myUglies[u3]*3 < temp) temp = myUglies[u3]*3;
  
    if(myUglies[u5]*5 < temp) temp = myUglies[u5]*5;
    
    myUglies[i] = temp;
 }
 printf("The 1500'th ugly number is %d.\n", myUglies[1499]);
    return 0;
}