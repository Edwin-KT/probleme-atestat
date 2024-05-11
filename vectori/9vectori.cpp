#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("vector.in");

/*
Se dă un vector de numere întregi, pozitive, care se citeşte din fişierul vector.in. Se cere să se afişeze
subsecvenţa palindromică de lungime maximă.
Exemplu: dacă fişierul vector.in are următorul conţinut:
15
1 12 31 12 1 4 27 13 9 26 9 13 27 4 131
atunci subsecvenţa cerută este: 4 27 13 9 26 9 13 27 4
*/

int main()
{
    int n, v[101], imax = 0, jmax = 0;
    fin >> n;
    for (int i = 1; i <= n; i++)
        fin >> v[i];
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
            if (v[i] == v[j])
            {
                int ok = 1;
                for (int x = i, y = j; x < y; x++, y--)
                    if (v[x] != v[y])
                        ok = 0;
                if (ok)
                    if (j - i > jmax - imax)
                    {
                        imax = i;
                        jmax = j;
                    }
            }
    }
    for (int i = imax; i <= jmax; i++)
        cout << v[i] << " ";
    return 0;
}