#include <cstdio>
#include <iostream>
#include <string>

int main(){
    int K, divX, divY, x, y;
    std::string s = "";

    scanf("%d", &K);

    while(K != 0){
        scanf("%d %d", &divX, &divY);
        

        for(int i = K; i > 0; i--){
            scanf("%d %d", &x, &y);
            s = "";

         if((x - divX == 0) || (y - divY == 0)){
                printf("divisa\n");
            }else{            
                if((y - divY) > 0){
                    s += "N";
                }else{
                    s += "S";
                }
            
                if((x - divX) > 0){
                    s += "E";
                }else{
                    s += "O";
                }   

                std::cout << s << std::endl;
            }        
        }
        scanf("%d", &K);
       
    }
}