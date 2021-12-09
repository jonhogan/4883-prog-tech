#include <iostream>
using namespace std;

int main(){
    char c = ' ';

    while(scanf("%c", &c) != EOF){
        if(c != '\n'){printf("%c", c - ('1' - '*'));}
        else{printf("\n");}
    }
}