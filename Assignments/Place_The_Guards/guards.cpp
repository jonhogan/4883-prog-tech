/**************************************
 * Name: Jonathan Hogan
 * Class: Programming Techniques
 * Problem: 11080 - Place the Guards 2
***************************************/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef vector<int> vi;
#define pb push_back

//Red vs Blue days!
#define red  0            //Only these two 
#define blue 1           //used if bipartite

#define yellow 2         //Fail test color

int main()
{
    int t;              //Number of test cases (t < 80)

    cin >> t;

    while (t--)
    {
        int v;          //Number of vectors ( 1 <= v <= 200)
        int e;          //Number of edges (0 <= e <= 10000)

        vector<vi> guards(v);
        vi color(v, yellow);   //Set all colors the the "fail test" color

        bool isBipartite = true;

        while(e--)
        {
            int f, t;   //Street junctions
            cin >> f >> t;

            guards[f].pb(t);
            guards[t].pb(f);

        }

        int count = 0;
        for (int i = 0; i < guards.size(); i++)
        {
            if (color[i] != yellow){continue;}

            queue<int> guardQueue;
            int count[2] = {0};

            color[i] = red;
            count[color[i]]++;
            guardQueue.push(i);

            while(!guardQueue.empty() && isBipartite)
            {
                int j = guardQueue.front();
                guardQueue.pop();

                for (int k = 0; k < guardQueue[j].size(); k++)
                {

                }
            }
        }
    }
}