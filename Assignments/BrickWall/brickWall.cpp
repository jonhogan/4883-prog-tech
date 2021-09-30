/**************************************
 * Name: Jonathan Hogan
 * Class: Programming Techniques
 * Problem: 900 - Brick Wall
***************************************/

#include <iostream>
#include <cstdio>

using namespace std;

int main() {

  int N;

  cin >> N;

  while(N != 0)
  {
    long sum = 0;
    long x = sum;
    long y = 1;

    while(N)
    {
      sum = x + y;
      x = y;
      y = sum;

      N--;
    }

    cout << sum << endl;

    cin >> N;
  }
  
}