/**************************************
 * Name: Jonathan Hogan
 * Class: Programming Techniques
 * Problem: 11080 - Place the Guards 2
***************************************/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

//Red vs Blue days!
int red = 0;            //Only these two 
int blue = 1;           //used if bipartite
int yellow = 2;         //Fail test color

int main()
{
    int t;              //Number of test cases (t < 80)

    cin >> t;

    while (t--)
    {
        int v;          //Number of vectors ( 1 <= v <= 200)
        int e;          //Number of edges (0 <= e <= 10000)

        vector<vector<int>> Guards(v);
        vector<int> color(v, yellow);   //Set all colors the the "fail test" color

        bool isBipartite = true;

        while(e--)
        {
            int f, t;   //Street junctions

        }
    }

}