#include <cstdio>

int main(){
    int *train;
    int N, size, swaps, temp;

    while(scanf("%d", &N) != EOF){
        for(int z = N; z > 0; z--){
            scanf("%d", &size);
            train = new int[size];
            swaps = 0;
        
            for(int i = 0; i < size; i++){
                scanf("%d", &train[i]);
            }

            for(int i = 0; i < size; i++){
                for(int j = 0; j < size-1; j++){
                    if(train[j] > train[j+1]){
                        temp = train[j];
                        train[j] = train[j+1];
                        train[j+1] = temp;
                        swaps++;
                    }
                }
            }
            delete train;

            printf("Optimal train swapping takes %d swaps.\n", swaps);
        }
    }
}