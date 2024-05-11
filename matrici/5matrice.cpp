#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("matrice.in");

int main()
{
    int n, m, a[101][101], b[101][101];
    fin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            fin >> a[i][j];
    int ja = m;
    for (int i = 1; i <= m; i++, ja--)
    {
        int ia = 1;
        for (int j = 1; j <= n; j++, ia++)
        {
            b[i][j] = a[ia][ja];
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}