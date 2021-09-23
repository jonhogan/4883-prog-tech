#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct point{
    int x;
    int y;

    point(): x{0}, y{0}{}
    point(int x, int y): x{x},y{y}{}
};

bool cmp(point &a, point &b){
    return a.x < b.x;
}

vector<point> points;

void printPoints(){
    for(int i = 0; i < points.size(); i++){
        cout << "[" << points[i].x << ", " << points[i].y << "]";
    }
}

int c, n, x, y;

int main()
{
    cin >> c;

    while(c--){
        cin >> n;
        while (n--)
        {
            cin >> x >> y;
            points.push_back(point(x,y));
        }

        printPoints();
        cout << endl;
        points.clear();
    }

    
}