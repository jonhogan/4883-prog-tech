#include <iostream>
using namespace std;

int three_n(long long x, long long y){
    int count = 1;
    int size;
    int n;

    if(x <= y){
        n = x;
        size = y;
    }else{
        n = y;
        size = x;
    }

    while( n != 1){
        if(n%2){
            n = (3*n)+1;
        }else{n = n/2;}

        count++;
    }

    return count;
}

int main(){

    long long i = 0;
    long long j = 0;
    int k;
    
    while(scanf("%lld %lld", &i, &j) != EOF){
        k = three_n(i, j);

        printf("%lld %lld %d\n", &i, &j, &k);
    }

}