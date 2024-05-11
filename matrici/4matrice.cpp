#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("maxim.txt");

int main()
{
    int n, m, max, imax, jmax, a[21][21];
    fin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            fin >> a[i][j];
            if (i == 1 and j == 1)
            {
                max = a[i][j];
                imax = i;
                jmax = j;
            }
            else if (a[i][j] > max)
            {
                max = a[i][j];
                imax = i;
                jmax = j;
            }
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (i == imax)
            {
                for (int k = i; k < n; ++k)
                    a[k][j] = a[k + 1][j];
            }
        }
    }
    n--;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (j == jmax)
            {
                for (int k = j; k < m; ++k)
                    a[i][k] = a[i][k + 1];
            }
        }
    }
    m--;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
            cout << a[i][j];
        cout << endl;
    }
    return 0;
}
