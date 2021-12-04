#include <iostream>
using namespace std;

int main(){

    int t, a, b;

    char p;
    
    while(cin >> t){
        
        for(int i = 0; i < t; i++){
            cin >> a >> b;
            
            if (a > b){p = '>';}
            else if (b > a){p = '<';}
            else{p = '=';}

            printf("%c\n", p);
        }       
    } 
}