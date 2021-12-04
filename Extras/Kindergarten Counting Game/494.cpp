#include <iostream>
#include <string>
using namespace std;

int main(){

    string text;
    int count;

    while(getline(cin, text)){
        count = 0;
        for(int i = 0; i < text.length(); i++){
            if(isalpha(text[i]) == false && isalpha(text[i - 1])){
                count++;
            }
        }
        printf("%d\n", count);
    }
}