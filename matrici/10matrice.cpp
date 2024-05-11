#include <iostream>
#include <fstream>
using namespace std;

ofstream fout("rez.txt");

int a[101][101];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            a[i][0] += a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j or i + j == n + 1)
                a[i][j] = a[i][0];
            fout << a[i][j] << " ";
        }
        fout << endl;
    }
    return 0;
}