#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

struct peak{
    double x;
    double y;

    peak(){
        x = 0;
        y = 0;
    }

    peak(double a, double b){
        x = a;
        y = b;
    }
};

bool compare(const peak &a, const peak &b){
    return a.x > b.x;
}

double power(float n, int e){

    for(int i = 1; i < e; i++){n = n * n;}

    return n;
}

double distance(peak a, peak b){

    return sqrt(power((a.x - b.x), 2) + power((a.y - b.y), 2));
}

int main(){
    
    int C;

   cin >> C;
    
    while(C--){

        int N;
        cin >> N;

        vector<peak> peaks;

        for(int i = 0; i < N; i++){
            
            peak peak;
            cin >> peak.x >> peak.y;
            peaks.push_back(peak);
        }

        sort(peaks.begin(), peaks.end(), compare);

        int maxHeight = 0;
        double length = 0;

        for(int i = 1; i < peaks.size(); i++){

            if(peaks[i].y > maxHeight){
                length += distance(peaks[i], peaks[i -1]) * (peaks[i].y - maxHeight) / (peaks[i].y - peaks[i - 1].y);

                maxHeight = peaks[i].y;
            }

            cout << setprecision(2) << fixed << length << endl;
        }

    }
}


