#include <iostream>
#include <fstream>
using namespace std;
ofstream fout("matrice.txt");

int main()
{
    int n, v[101], a[11][11];
    cin >> n;
    for (int i = 1; i <= n * n; ++i)
        cin >> v[i];
    int i = 1, j = n, ind = 0;
    while (i <= j)
    {
        for (int l = i; l <= j; ++l)
            a[i][l] = v[++ind];
        for (int l = i + 1; l <= j; ++l)
            a[l][j] = v[++ind];
        for (int l = j - 1; l >= i; --l)
            a[j][l] = v[++ind];
        for (int l = j - 1; l > i; --l)
            a[l][i] = v[++ind];
        i++;
        j--;
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
            fout << a[i][j] << " ";
        fout << endl;
    }
    return 0;
}