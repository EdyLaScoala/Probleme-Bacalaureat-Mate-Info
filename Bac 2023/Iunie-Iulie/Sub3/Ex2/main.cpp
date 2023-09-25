#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");

int main()
{
    int m, n, aux, max, maxpos;
    fin >> n >> m;
    int v[m][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            fin >> v[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        max = 0;
        maxpos = 1;
        for(int j=0; j<m; j++)
        {
            
            if (v[i][j] > max)
            {
                max = v[i][j];
                maxpos = j + 1;
            }
        }
        cout << i + 1 << " : " << maxpos << "; ";
    }
    return 0;
}