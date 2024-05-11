#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("vector.in");

/*
Din fişierul vector.in se citeşte un vector de numere întregi, pozitive, cu cel puţin 2 cifre fiecare. Sa
se determine cea mai lungă subsecvenţă de elemente prime, ale căror inverse sunt tot numere prime.
Exemplu: dacă fişierul vector.in are următorul conţinut:
9
11 971 44 19 181 751 347 33 929
atunci subsecvenţa cerută este: 181 751 347
*/

int prim(int n)
{
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    for (int d = 3; d * d <= n; d++)
        if (n % d == 0)
            return 0;
    return 1;
}

int invers(int n)
{
    int inv = 0;
    while (n)
    {
        inv = inv * 10 + n % 10;
        n /= 10;
    }
    return inv;
}

int main()
{
    int n, v[101], secvMax = 0, secvCur = 0, st, dr, stMax, drMax;
    fin >> n;
    for (int i = 1; i <= n; i++)
    {
        fin >> v[i];
        if (prim(v[i]) == 1 and prim(invers(v[i])) == 1)
        {
            if (secvCur == 0)
                st = i;
            dr = i;
            secvCur++;
        }
        else
        {
            if (secvCur > secvMax)
            {
                secvMax = secvCur;
                stMax = st;
                drMax = dr;
            }
            secvCur = 0;
        }
    }
    for (int i = stMax; i <= drMax; i++)
        cout << v[i] << " ";
    return 0;
}