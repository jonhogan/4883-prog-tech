/**************************************
 * Name: Jonathan Hogan
 * Class: Programming Techniques
 * Problem: 11080 - Place the Guards 2
***************************************/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define PB push_back

typedef vector<int> vi;     //Vector of ints
typedef vector<vi> vii;     //Vector of vector of ints
typedef queue<int> qi;      //Queue of ints

static const int RED = 0;
static const int BLUE = 1;

static const int YELLOW = 2; //Only if not Bipartite

int main()
{  
    int T;
    cin >> T;
    while ( T-- )
    {
        int v, e;
        cin >> v >> e;
        
        vii G(v);
        vi color(v, YELLOW);
        bool isBipartite = true;
        
        while ( e-- )
        {
            int f, t;
            cin >> f >> t;
            G[f].PB(t);
            G[t].PB(f);
        }

        int guardCount = 0;
        for (int j = 0; j < G.size() && isBipartite; ++j)
        {
            if (color[j] != YELLOW){continue;}

            qi q;
            int count[2] = {0};

            color[j] = RED;
            count[color[j]]++;
            q.push(j);

            while (!q.empty() && isBipartite)
            {
                int u = q.front();
                q.pop();
                for (int i = 0; i < G[u].size(); ++i)
                {
                    int v = G[u][i];
                    if (color[v] == color[u])
                    {
                        isBipartite = false;
                        break;
                    }
                    else if (color[v] == YELLOW)
                    {
                        color[v] = 1 - color[u]; 
                        count[color[v]]++;
                        q.push(v);
                    }
                }
            }
            
            guardCount += max(1, min(count[RED], count[BLUE]));
        }

        if (!isBipartite)
            cout << -1 << endl;
        else
            cout << guardCount << endl;
    }

    //cout << endl;

    return 0;
}