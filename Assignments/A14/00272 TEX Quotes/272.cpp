#include <iostream>
using namespace std;

int main(){
    char ch = ' ';
    int count = 0;

    while(scanf("%c", &ch) != EOF){
        if(ch == '\n'){printf("\n");}
        else if ( ch == '"'){
            count++;
            if(count % 2 != 0){printf("``");}
            else{printf("''");}
        }
        else{printf("%c", ch);}
    }
}