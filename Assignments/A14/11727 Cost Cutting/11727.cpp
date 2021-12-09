#include <iostream>
using namespace std;

int main(){

    int t, a, b, c;
    int count, keeper;

    while(cin >> t){
        
        count = 1;
        for(int i = 0; i < t; i++){
            cin >> a >> b >> c;
            if (a < b && a < c){
                if (b < c){keeper = b;}
                else{keeper = c;}
            }
            else if (b < a && b < c){
                if (a < c){keeper = a;}
                else{keeper = c;}
            }
            else if (c < b && c < a){
                if (a < b){keeper = a;}
                else{keeper = b;}
            }

            printf("Case %d: %d\n", count, keeper);
            
            count++;
        }       
    } 
}