#include <iostream>
using namespace std;

int main(){

    int t, a, b;
    int sum, count;

    while(cin >> t){
        
        count = 1;
        for(int i = 0; i < t; i++){
            cin >> a >> b;
            sum = 0;
            for(a; a <= b; a++){
                if(a % 2 != 0){sum += a;}
            }

            printf("Case %d: %d\n", count, sum);
            
            count++;
        }       
    } 
}