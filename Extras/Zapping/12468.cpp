#include <stdio.h>

int main() {
    int B, A, C;
    FILE * outFile;

    //outFile = fopen("out", "w");

    scanf("%d %d", &A, &B);
    
    while (A != -1 && B != -1) {
      
        (A > B )?(C = (A + (~B+1))):(C = (B + (~A+1)));
        
        (C >= 50)?((printf("%d\n", (100 + (~C+1))))):((printf("%d\n", C)));
         
        scanf("%d %d", &A, &B);
    }

}