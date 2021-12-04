#include<cstdio>
#include<vector>
using namespace std;

vector<int>stack[3];
char c[3] = { 'A','B','C' };
int counter, m;

void print(){
    int size;

    putchar('\n');
    for (int i = 0; i < 3; i++){
        printf("%c=>", c[i]);
        if (!stack[i].empty())
        {
            printf("   ");
            size = stack[i].size();
            for (int j = 0; j < size - 1; j++)
                printf("%d ", stack[i][j]);
            printf("%d", stack[i].back());
        }
        putchar('\n');
    }
}

void solve_it(int n, int from, int buffer, int to){
    if (counter == m)
        return;

    if (n == 1){
        counter++;
        stack[to].push_back(stack[from].back());
        stack[from].pop_back();
        print();
    }
    else{
        solve_it(n - 1, from, to, buffer);
        if (counter == m)
            return;
        counter++;
        
        stack[to].push_back(stack[from].back());
        stack[from].pop_back();
        print();
        solve_it(n - 1, buffer, from, to);
    }
}

int main(){
    int n, Case = 1;

    while (scanf("%d%d", &n, &m) && n){
        printf("Problem #%d\n", Case++);
        counter = 0;
        for (int i = n; i; i--){
            stack[0].push_back(i);
        }

        print();
        solve_it(n, 0, 1, 2);

        for (int i = 0; i < 3; i++){
            stack[i].clear();
        }

        putchar('\n');
    }

    return 0;
}