#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("matrice.in");

int main()
{
    int n, m, a[101][101], maxRama = -1, aparitiiMax = 0, x;
    fin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (i == 1 or j == 1 or i == n or j == n)
            {
                if (x > maxRama)
                {
                    maxRama = x;
                    aparitiiMax = 1;
                }
                else if (x == maxRama)
                    aparitiiMax++;
            }
        }
    }
    cout << maxRama << " " << aparitiiMax;
    return 0;
}