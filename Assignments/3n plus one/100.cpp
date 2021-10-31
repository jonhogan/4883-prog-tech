#include <cstdio>

using namespace std;


long long three_n(long long a, long long b)
{
  long long largest = 0;
  
  int itr, size, count;

  if (a <= b){
    itr = a;
    size = b;
  }else{
    itr = a;
    size = b;
  }

  for (int i = itr; i <= size; i++)
  {
    count = 1;
    
    long long n = i;

    while(n != 1){

      (n % 2 == 0)?n = n >> 1:n = (3 * n) + 1;
      
      count++;

    }

    long long size = count;

    if (size > largest){largest = size;}
  }

  return largest;
}


int main() 
{
  long long x, y = 0;

  while (scanf("%lld %lld", &x, &y) != EOF)  
  {

    long long mathStuff = three_n(x, y);

    printf("%lld %lld %lld\n", x, y, mathStuff);
  }
  
  return 0;
}