#include <bits/stdc++.h>
using namespace std;

int main() {
    string in;
    int cases = 1;
    while(cin >> in, in != "end"){
        
        vector<char> containers;
        for(int i=0;i<in.size();i++){
            char best = 'z'+1;
            int pos = containers.size();
            for(int j=0;j<containers.size();j++)
            if(containers[j] >= in[i] && containers[j] < best){
                pos = j;
                best = containers[j];
            }
            
            if(pos == containers.size()) containers.push_back(in[i]);
            else containers[pos] = in[i];
        }
        printf("Case %d: %d\n",cases++,containers.size());
    }
}