/***********************************
 * Name: Jonathan Hogan
 * Class: Programming Techniques
 * Problem: 10038 - Jolly Jumpers
***********************************/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


int main()
{
    bool isJolly = true;

    int count;     //Store the number of ints in each set of jumpers
    int n;

    vector<int> jumpers;
    vector<int> jollyCounter;

    while (cin >> count)
    {
        jumpers.clear();
        jollyCounter.clear();

        for (int i = 0; i < count; i++)
        {
            cin >> n;
            jumpers.push_back(n);
            jollyCounter.push_back(0);
        }

        for(int i = 0; i < count - 1; i++)
        {
            n = abs(jumpers[i] - jumpers[i+1]);
            
            if(n > 0 && n < count)
            {
                jollyCounter[n] = 1;
            }
        }

        for (int i = 1; i < count; i++)
        {
            if(jollyCounter[i] != 1)
            {
                isJolly = false;
            }
        }

        if (isJolly)
        {
            cout << "Jolly\n";
        }else{
            cout << "Not jolly\n";
        }
        isJolly = true;
    }
}