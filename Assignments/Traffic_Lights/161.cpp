/*********************************
 * Name: Jonathan Hogan
 * Class: Programming Techniques
 * Problem: 161 - Traffic Lights
 * 
 * ******************************/

#include <vector>
#include <iostream>
#include <cstdio>

using namespace std;

//time in seconds
const int minute = 60;
const int hour = 3600;
const int fiveHour = 18000;

//Function prototype
bool Synced(const vector<int> t, const vector<int> d, int timer);

int main()
{
    bool isSynced;

    int light;
    int min;
    int number;
    int time;
    int hr;

    vector<int> lightTimes;
    vector<int> lightDoubled;


    while(scanf("%d", &light), light)
    {
        lightTimes.push_back(light);       // Initial time for the lights
        lightDoubled.push_back(light * 2); // Doubled to account for the red cycle

        min = light;                       // Used for the modulo later

        while(scanf("%d", &number), number)
        {
            lightTimes.push_back(number);
            lightDoubled.push_back(number * 2);

            if (min > number){ min = number;}
        }

        time = min * 2;                    //account for the doubled times with the red cycle

        /******Test Loops**********************************
        for (int i = 0; i < lightTimes.size(); i++)
        {
            cout << lightTimes[i] << " ";
        }
        
        cout << "\n";
        
        for (int i = 0; i < lightDoubled.size(); i++)
        {
            cout << lightDoubled[i] << " ";
        }
        
        cout << "\n";
        *************Test Concluded***********************/
        
       while(!(isSynced = Synced(lightTimes, lightDoubled, time)) && time <= fiveHour)
       {
           time++;
       }

       if(isSynced)
       {
           hr = time/hour;
           printf("0%d:%02d:%02d\n", time/hour, (time - hr * hour) / minute, time % minute);
       }
       else
       {
           printf("Signals fail to synchronise in 5 hours\n"); //Why isn't this "synchronize"?
       }

        lightTimes.resize(0);
        lightDoubled.resize(0);
        if(!isSynced){isSynced = true;}
    }
   // printf("\n");

}


bool Synced(const vector<int> t, const vector<int> d, int timer)
{
    for (int i = 0; i < t.size(); i++)
    {
        if(!(timer%d[i] < t[i]-5))
        {
            return false;
        }
    }

    return true;
}