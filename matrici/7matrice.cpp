#include <iostream>
using namespace std;

int main()
{
    int n, x = 0, v[30], a[31][31];
    cin >> n;
    while (n)
    {
        v[++x] = n % 10;
        n /= 10;
    }
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            a[i][j] = v[x - j + 1];
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}