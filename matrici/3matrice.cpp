#include <iostream>
#include <fstream>
using namespace std;

ofstream fout("minim.txt");

int main()
{
    int n, a[51][51];
    cin >> n;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];
    for (int i = 1; i <= n; ++i)
    {
        int min;
        for (int j = 1; j <= n; ++j)
        {
            if (a[j][i] < min or j == 1)
                min = a[j][i];
        }
        fout << min << " ";
    }
    return 0;
}