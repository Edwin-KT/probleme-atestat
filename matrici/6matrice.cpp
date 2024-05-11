#include <iostream>
using namespace std;

int main()
{
    int n, a[101][101];
    cin >> n;
    int i = 1, j = n, pus = 1;
    while (i <= j)
    {
        for (int l = i; l <= j; l++)
            a[i][l] = pus;
        for (int l = i + 1; l <= j; l++)
            a[l][j] = pus;
        for (int l = j - 1; l >= i; l--)
            a[j][l] = pus;
        for (int l = j - 1; l > i; --l)
            a[l][i] = pus;
        i++;
        j--;
        pus += 2;
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}