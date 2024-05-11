#include <iostream>
using namespace std;

/*
Se citesc de la tastatură două tablouri unidimensionale cu elementele în ordine crescătoare, a cu n
elemente, respectiv b cu m elemente. Să se determine din cele două tablouri, un al treilea tablou
unidimensional în mod optim, care să conţină toate elementele celor două tablouri tot în ordine
crescătoare. Tabloul nou format va fi afișat în fișierul ordonat.txt.
*/

int main()
{
    int n, m, a[1001], b[1001], c[2002], ind = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    cin >> m;
    for (int i = 1; i <= m; ++i)
        cin >> b[i];
    int i = 1, j = 1;
    while (i <= n and j <= m)
    {
        while (a[i] < b[j] and i <= n)
        {
            c[++ind] = a[i];
            i++;
        }
        while (b[j] < a[i] and j <= m)
        {
            c[++ind] = b[j];
            j++;
        }
        if (a[i] == b[j])
        {
            c[++ind] = a[i];
            c[++ind] = b[j];
            i++;
            j++;
        }
    }
    while (j <= m)
        c[++ind] = b[j], j++;
    while (i <= n)
        c[++ind] = a[i], i++;
    for (int i = 1; i <= ind; ++i)
        cout << c[i] << " ";
    return 0;
}