/**************************************
 * Name: Jonathan Hogan
 * Class: Programming Techniques
 * Problem: 10226 - Hardwood Species
***************************************/

#include <cstdio>
#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int N;
    string trash;
    scanf("%d", &N);
    string treeName;

    if (cin.peek() == '\n'){cin.ignore();}
    if (cin.peek() == '\n'){cin.ignore();}
    

    while (N > 0)
    {

        //cout << N << endl << endl;
        int i = 0;

        map<string, int> Trees;
        map<string, int>::iterator j;

        while(getline(cin, treeName))
        {
            if(treeName.length() == 0){break;}
            Trees[treeName]++;
            i++;
        }

        for(j = Trees.begin(); j !=Trees.end(); j++)
        {
            string temp = j -> first;
            int count = j -> second;

            double percent = count * 100/double(i);

            printf("%s %.4lf\n", temp.c_str(), percent);
        }

        N--;
        if (N == 0)
        {
            continue;
        }else{cout << endl;}
    }
}

