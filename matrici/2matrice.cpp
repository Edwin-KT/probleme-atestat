#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("vecini.txt");

bool suntInMatrice(int n, int i, int j)
{
    return (i >= 1 and i <= n and j >= 1 and j <= n);
}

int main()
{
    int di[9] = {0, -1, -1, 0, 1, 1, 1, 0, -1};
    int dj[9] = {0, 0, 1, 1, 1, 0, -1, -1, -1};
    int n, a[15][15];
    fin >> n;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            fin >> a[i][j];

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            int ok = 1;
            for (int k = 1; k <= 8; ++k)
            {
                int inou = di[k] + i;
                int jnou = dj[k] + j;
                if (suntInMatrice(n, inou, jnou) and (a[inou][jnou] % 2 == 0))
                {
                    ok = 0;
                    break;
                }
            }
            if (ok)
                cout << i << " " << j << endl;
        }
    }

    return 0;
}